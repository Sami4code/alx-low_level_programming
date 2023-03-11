#include "main.h"

/**
 * _isalpha - prints alphabetic characters
 * @c: prototype character
 * Return: 1 if c is a character, 0 if not
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
