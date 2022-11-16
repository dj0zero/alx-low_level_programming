#include "main.h"

/**
 * _memset - function fills memory with a constant byte,
 * @s: will be memory area
 * @b: will be constant byte
 * @n: will be bytes filled
 * Return: pointer to dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
