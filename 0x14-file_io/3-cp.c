#include "holberton.h"
#define PERM (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define BUFRSIZE 1024
/**
* main - Entry point
* @ac: argument count
* @av: argument vector
* Return: copied file
*/
int main(int ac, char *av[])
{
	int from, to, n;
	char bufr[BUFRSIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, “Usage: cp file_from file_to\n”);
		exit(97); }

	from = open(av[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, “Error: Can't read from file NAME_OF_THE_FILE\n”, from);
		exit(98); }

	to = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, PERM);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, “Error: Can’t write to NAME_OF_THE_FILE\n”);
		exit(99); }

	n = read(from, bufr, BUFRSIZE);
	write(to, bufr, n);
	from = close(from);
	if (from == -1)
	{
		dprintf(“Error: Can't close fd FD_VALUE\n”);
		exit(100); }

	to = close(from);
	if (to == -1)
	{
		dprintf(“Error: Can't close fd FD_VALUE\n”);
		exit(100); }
	return (0);
}
