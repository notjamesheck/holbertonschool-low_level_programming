#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - Entry point
* @argc: int parameter, argumennt count
* @argv: double pointer, argument strings
* Return: void, print change
*/
int main(int argc, char *argv[])
{
	char *sum = argv[argc - 1];
	int num = 0;
	int val[] = {25, 10, 5, 2, 1};
	int count = 0, i = 0;

	printf("argc = %d\n", argc);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(sum) < 0)
	{
		printf("0\n");
		return (0);
	}
	else

	num = atoi(sum);

	while (val[i] != '\0')
	{
		printf("I'm in\n");
		if (num >= val[i])
		{
			num -= val[i];
			count++;
		}
		else
		i++;
	}
	printf("*val = %d\n", *val);
	printf("num = %d\n", num);
	printf("this iz le count %d\n", count + num);



	return (0);
}
