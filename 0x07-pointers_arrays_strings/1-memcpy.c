#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: will be memory destination area
 * @src: will be memory source area
 * @n: will be bytes filled
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		*(dest + a) = *(src + a);

	return (dest);
}
