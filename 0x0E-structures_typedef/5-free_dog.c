#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function taht frees dogs
 * @d: will be dot to be freed
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
