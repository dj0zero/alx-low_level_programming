#include "main.h"
#include <stdlib.h>

/**
 * create_array - function creates arrays of char
 * then initializes it with specific char
 * @size: will be size of array to initialize
 * @c: will be char to be initialized
 * Return: if size = 0 give NULL
 * otherwise pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
