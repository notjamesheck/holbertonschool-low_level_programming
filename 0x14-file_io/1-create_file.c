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
* create_file - Entry point
* @filename: pointer to string
* @text_content: pointer to string
* Return: file with user privileges and content
*/
int create_file(const char *filename, char *text_content)
{
	int file, count;
	
	if (filename == NULL || text_content == NULL)
	{
		return (-1); }
	
	file = open(filename, O_CREAT | O_TRUNC | O_RDWR, S_IRUSR | S_IWUSR);
	count = _strlen(text_content);
	write(file, text_content, count);
	return (1);
}
