#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	char b;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (b = 'a' ; b <= 'f' ; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
