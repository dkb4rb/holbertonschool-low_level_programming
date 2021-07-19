#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - create structure of the dog.
 * @d: this is pointer with contain array.
 *Return:
*/

void free_dog(dog_t *d)
{

	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
