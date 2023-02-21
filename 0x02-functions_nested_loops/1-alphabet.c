#include "main.h"

/**
 * print_alphabet - prints alphabet in lower case from a-z
 * Return: 0;
 */

void print_alphabet(void)
{
	char b;

	for (b = 'a' ; b <= 'z' ; b++)
		_putchar(b);
	_putchar('\n');
}
