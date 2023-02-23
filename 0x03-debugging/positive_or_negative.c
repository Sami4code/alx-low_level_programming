#include "main.h"

/**
 * positive_or_negative - tests for negative or positive
 * @i: prototype parameter
 * Return: 0 always
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);

}
