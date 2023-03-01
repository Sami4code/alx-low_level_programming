#include "main.h"

/**
 * _strncat -  function that concatenates two strings
 * @dest: string to be appended
 * @src: prototype string
 * @n: the number of bytes to be appendded to the dest
 * Return: returns a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;

	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}
