#include "main.h"

/**
 *  print_alphabet_x10 - prints alphabet 10x in lower case
 * Return: 0 (success)
 */

void print_alphabet_x10(void)
{
	int i;
	char d;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (d = 'a' ; d <= 'z' ; d++)
			_putchar(d);
		_putchar('\n');
	}
}
