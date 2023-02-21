#include "main.h"

/**
 *  print_alphabet - prints alphabet in lower case from a-z
 *  Return: 0; (success)
 */
void print_alphabet(void)
{
	char d;

	for (d = 'a' ; d <= 'z' ; d++)
		_putchar(d);
	_putchar('\n');
	
}
