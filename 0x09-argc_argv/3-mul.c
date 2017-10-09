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
	int mult = 0;

	sum = atoi(argv[count]);

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	while (count < argc)
	{
		count++;
		mult = atoi(argv[count]);
		sum *= mult;
		if (count + 1 == argc)
			break;
	}
	printf("%d\n", sum);
	return (0);
}
/* comment */
