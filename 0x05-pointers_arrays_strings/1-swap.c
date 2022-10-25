#include "main.h"

/**
 * swap_int - function swaps the value of two integers
 * @a: will be used to declare a
 * @b: will be used to declare b
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
