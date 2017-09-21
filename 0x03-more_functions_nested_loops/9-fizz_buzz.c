#include <stdio.h>

/**
* main - Fizz Buzz
*
* Return: Always 0.
*/
int main(void)
{
	int le;

	for (le = 1; le <= 100; le++)
	{
		if (le % 3 == 0 && le % 5 != 0)
		{
			printf("Fizz");
		}
		else if (le % 5 == 0 && le % 3 != 0)
		{
			printf("Buzz");
		}
		else if (le % 3 == 0 && le % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
			printf("%d", le);

		if (le != 100)
		printf(" ");
	}
	printf("\n");
	return (0);
}
