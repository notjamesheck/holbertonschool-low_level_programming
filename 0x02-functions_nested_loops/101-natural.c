#include <stdio.h>

/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
int main(void)
{
	int i = 0, k;

	for (k = 1024; k != 0; k--)
	{
		if (k % 3 == 0 || k % 5 == 0)
		{
			i += k;
		}
	}
	printf("%d\n", i);
	return (0);
}
