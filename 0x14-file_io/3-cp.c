#include "holberton.h"
#define PERM (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define BUFSIZE 1024
/**
* main - Entry point
* @ac: argument count
* @av: argument vector
* Return: copied file
*/
int main(int ac, char *av[])
{
	int f_from, f_to, red;
	char *buf;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	if (av[1] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	f_from = open(av[1], O_RDONLY);
	if (f_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	f_to = open(av[2], O_TRUNC | O_CREAT | O_WRONLY, PERM);
	if (f_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	buf = malloc(sizeof(char) * BUFSIZE);
	if (buf == NULL)
		return (0);
	do {
		red = read(f_from, buf, BUFSIZE);
		if (red == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		if ((write(f_to, buf, red)) == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
	} while (red == BUFSIZE);
	if ((close(f_from)) == -1)
		free(buf);
		close(f_to);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
		exit(100);
	if ((close(f_to)) == -1)
		free(buf);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_to);
		exit(100);
	free(buf);
	return (0);
}
