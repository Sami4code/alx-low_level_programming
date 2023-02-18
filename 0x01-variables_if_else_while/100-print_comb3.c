#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0 (success)
 */

int main(void)
{
	int a;
	int b;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 1 ; b < 10 ; b++)
		{
			if (a < b && a != b)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
