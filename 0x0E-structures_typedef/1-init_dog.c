#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialises a variable of type struct dog
 * @d: pointer to struct dog
 * @age: age parameter
 * @name: integer
 * @owner: owner to initialise
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
