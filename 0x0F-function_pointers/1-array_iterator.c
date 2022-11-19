#include "function_pointers.h"

/**
 * array_iterator - function executes a function given
 * as a parameter on each element of an array
 * @size: will be the array size
 * @action: will be pointer to function
 * Return: no return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
