#include <stdio.h>

/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
int main(void)
{
	int a = 1, b = 1, c = 1, d = 4000000;

	while ((d - c) > 0)
	{	
		if ((d - c) > 0) 
		printf("%d, ", c);
		
		else if ((d - c) < 0)
		{
		printf("%d", c);
		}
		a = b;
		b = c;
		c = a + b;
	}
	printf("\n");
	return (0);
}

