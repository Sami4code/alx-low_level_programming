#include "main.h"

/**
 * _memset - prints value to a block of memory
 * @s: address of memory
 * @b: the value to be printed
 * @n: number of bytes
 * Return: new value for array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
