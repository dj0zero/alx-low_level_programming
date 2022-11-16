#include "main.h"

/**
 * _strlen_recursion - function that returns the legnth of a string
 * @s: will be the string measured
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
