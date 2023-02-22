#include <stdio.h>

/**
 * main - the main function
 * Return: 0 always
 */

int main(void)
{
	int a;
	unsigned long int b, j, next, sum;

	b = 1;
	j = 2;
	sum = 0;

	for (a = 1 ; a <= 33 ; a++)
	{
		if (b < 4000000 && (b % 2) == 0)
		{
			sum = sum + b;
		}
		next = b + j;
		b = j;
		j = next;
	}
	printf("%lu\n", sum);
	return (0);
}
