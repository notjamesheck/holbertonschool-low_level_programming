#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @argc: argument count
* @argv: argument vector
* Return: void
*/
int main(int argc, char *argv[])
{
	int count = 1;
	int sum = 0;
	int sec = 0;

	if (argc <= 2)
	{
		printf("0\n");
		return (1);
	}

	for (count = 1; count < argc; count++)
	{
		for (sec = 0; argv[count][sec] != '\0'; sec++)
		{
			if (!(argv[count][sec] >= '0' && argv[count][sec] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
	}
	printf("%d\n", sum);
	return (0);
}
