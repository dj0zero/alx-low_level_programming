#include "main.h"

/**
 * _strpbrk - function that searches the string
 * for any of set of byte
 * @s: will be the first string
 * @accept: will be the second string
 * Return: pointer to byte in s matching a byte in accept
 * otherwise NULL if no similar byte found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int c, d;

	for (c = 0; *(s + c) != '\0'; c++)
	{
		for (d = 0; *(accept + d) != '\0'; d++)
		{
			if (*(s + c) == *(accept + d))
				return (s + c);
		}
	}
	return ('\0');
}
