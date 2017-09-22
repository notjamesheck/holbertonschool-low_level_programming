#include <stdio.h>

/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
int main(void)
{
	long int num = 612852475143, prod;
	long int div = 2;

	while (div <= prod)
	{
		if (prod % div != 0)
		{
			div++;
		}
		else if (prod % div == 0)
		{
			prod = num / div;
		}
	}
	printf("%ld\n", div);
	return (0);
}
