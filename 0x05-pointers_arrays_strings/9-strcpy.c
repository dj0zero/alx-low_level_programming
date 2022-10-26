#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function copies string pointed to by src,
 * including terminating null byte,
 * to buffer pinted to by dest
 * @src: will be the source
 * @dest: will be the destination
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
