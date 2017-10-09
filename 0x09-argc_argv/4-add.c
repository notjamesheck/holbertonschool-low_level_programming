#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - Entry point
* @argc: argument count
* @argv: argument vector
* Return: void
*/
int main(int argc, char *argv[])
{
	int c = 1;
	int sum = 0;
	int s = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}

	for (c = 1; c < argc; c++)
	{
		for (s = 0; argv[c][s] != '\0'; s++)
		{
			if (isdigit(argv[c][s]))
				continue;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[c]);
	}
	printf("%d\n", sum);
	return (0);
}
