#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0 (success)
 */

int main(void)
{
	char b;

	for (b = 'z' ; b >= 'a' ; b--)
		putchar(b);
	putchar('\n');
	return (0);
}
