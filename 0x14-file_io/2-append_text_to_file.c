#include "holberton.h"

/**
* _strlen - Entry point
* @s: char string pointer
* Return: int, string length
*/
int _strlen(char *s)
{
	int c;

	for (c = 0; *s; c++, s += 1)
	{}
	return (c);
}
/**
* append_text_to_file - Entry point
* @filename: pointer to string
* @text_content: pointer to string
* Return: file with appended content
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count;

	if (filename == NULL)
	{
		return (-1); }
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
	{
		close(fd);
		return (-1); }
	count = _strlen(text_content);
	write(fd, text_content, count);
	close(fd);
	return (1);
}
