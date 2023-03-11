#include <unistd.h>

/**
 * _putchar - prints the character c
 * @c: character to be printed
 * Return: 1 if success, 0 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
