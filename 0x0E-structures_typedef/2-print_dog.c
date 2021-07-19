#include "dog.h"

/**
 * print_dog - create structure of the dog.
 * @d: this is pointer with contain array.
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
		printf("Name: %s\nAge: %f\nOwner: %s\n",
			   d->name == NULL ? "(nil)" : d->name,
			   d->age,
			   d->owner == NULL ? "(nil)" : d->owner);
}
