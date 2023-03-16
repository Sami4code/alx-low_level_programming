#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory
 * @b: memory to be alocated
 * Return: a pointer to the memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)

		exit(98);

	return (ptr);
}
