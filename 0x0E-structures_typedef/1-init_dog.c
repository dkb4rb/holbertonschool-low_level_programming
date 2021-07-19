#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - create structure of the dog.
 * @d: this is pointer with contain array.
 * @name: value this structure dog.
 * @age: vale age of the dog in the structure.
 * @owner: is owner of the dog in the structure.
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
