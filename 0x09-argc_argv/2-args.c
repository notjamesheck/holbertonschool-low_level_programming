#include <stdio.h>

/**
* main - Entry point
* @argc: argument count
* @argv: argument vector
* Return: void
*/
int main(int argc, char *argv[])
{
	int count = 0;

	while (count < argc)
	{
	printf("%s\n", argv[count]);
	count++;
	}
	return (0);
}
