#include "main.h"

/**
 * _strchr - function locates a character in a string
 * @s: will be the string
 * @c: will be the character
 * Return: pointer to first character c occurence
 */

char *_strchr(char *s, char c)
{
	unsigned int b = 0;

	for (; *(s + b) != '\0'; b++)
		if (*(s + b) == c)
			return (s + b);
	if (*(s + b) == c)
		return (s + b);
	return ('\0');
}
