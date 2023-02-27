#include "main.h"

/**
 * swap_int -  function that swaps the values of two integers
 * @a: parameter to swap
 * @b: parameter to swap
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
