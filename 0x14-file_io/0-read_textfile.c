#include "holberton.h"
/**
* read_textfile - Entry point
* @filename: pointer to file
* @letters: size_t parameter
* Return: chars printed on success, 0 on failure
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, ret = 0;
	char *buf = NULL;

	buf = malloc((sizeof(char) * letters) + 1);

	if (buf == NULL)
	{
		return (0); }

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		free(buf);
		return (0); }

	ret = read(fd, buf, letters);
	if (ret == -1)
	{
		free(buf);
		close(fd);
		return (0); }
	write(STDOUT_FILENO, buf, ret);
	close(fd);
	free(buf);
	return (ret);
}
