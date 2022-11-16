#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function allocates memory for an array
 * @nmemd: will be number of elements
 * @size: will  be byte size of each array element
 * Return: NULL if nmemb = 0 or size = 0 or function fails
 * otherwise a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(size * nmemb);

	if (memory == NULL)
		return (NULL);

	filler = memory;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (memory);
}
