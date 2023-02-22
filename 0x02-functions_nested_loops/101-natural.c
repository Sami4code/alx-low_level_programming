#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0 always
 */

int main(void)
{
	int a;
	int sum;

	for (a = 0 ; a < 10 ; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			sum = sum + a;
		}
	}
	printf("%d\n", sum);
	return (0);
}
