#include "main.h"

/**
 * _strncpy - function copies a string
 * @dest: will be destination
 * @src: will be source
 * @n: will be byte amount from source
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
