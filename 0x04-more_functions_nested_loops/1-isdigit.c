#include "main.h"

/**
 * _isdigit - function checks for digit between 0 and 9
 * @c: will be used for character
 * Return: 1 if c is a digit
 * 0 if not
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
