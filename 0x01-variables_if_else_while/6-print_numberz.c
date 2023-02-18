#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0 (success)
 */

int main(void)
{
	int b;

	for (b = 0 ; b < 10 ; b++)
		putchar(b + '0');
	putchar('\n');
	return (0);
}
