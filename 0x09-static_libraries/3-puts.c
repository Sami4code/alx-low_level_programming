#include "main.h"
#include <stdio.h>

/**
 *  _puts - prints characters
 * @s: srting
 * Return: 0
 */

void _puts(char *s)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
