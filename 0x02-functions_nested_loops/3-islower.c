#include "main.h"

/**
 *  _islower - checks the lower case number
 *  @c: parameter c
 *  Return: 1 if in lower case
 *  and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
