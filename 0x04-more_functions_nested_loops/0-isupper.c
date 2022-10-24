#include "main.h"

/**
 * isupper - function checks for uppercase character
 * @c: will be used for character
 * Return: 1 if c is uppercase
 * otherwise 0
 */

int _isuper(int c)
{
	if (c>= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
