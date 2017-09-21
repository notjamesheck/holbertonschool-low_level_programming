#include <stdio.h>

/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
int main(void)
{
	int count;
	long int a = 1, b = 1, c = 1, head1, head2, head3, tail1, tail2, tail3; 
	long int d = 100000000000000;

	for (count = 0; count < 94; count++)
	{
		if (c != 7540113804746346429)
		{
			
			if (c == 7540113804746346429)
			{
			printf("%ld, ", c);
			head1 = b / d;
			head2 = c / d;
			tail1 = b % d;
			tail2 = c % d;
			}
			else 
			printf("%ld, ", c);
			a = b;
			b = c; 
			c = a + b;
		}

		tail1 = tail2;
		head2 = head3;
		tail2 = tail3;
		head3 = head1 + head2;
		tail3 = tail1 + tail2;
		printf("%ld%ld, ", head3, tail3);
	}
				 
	 
	return (0);
}
