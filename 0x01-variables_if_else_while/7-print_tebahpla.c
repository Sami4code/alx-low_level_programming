#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0 (success)
 */

int main(void)
{
	char a;

	for (a = 'z' ; a >= 'z' ; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
