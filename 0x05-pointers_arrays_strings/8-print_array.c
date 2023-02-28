#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers
 * @a: prototype a
 * @n: prototype n
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
