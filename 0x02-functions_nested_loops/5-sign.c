#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: prototype parameter
 * Return: return 1 if n is greater than zero, 0 when n is equal to zero
 * and -1 if n is lesss than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
}
