#include "main.h"

/**
 *
 * print_numbers - prints numbers from 0 - 9
 *@a: parameter a
 * Return: void
 */

void print_numbers(void)
{
	char a;

	for (a = '0' ; a <= '9' ; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
