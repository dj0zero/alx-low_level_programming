#include "main.h"

/**
 * _isalpha - function to check if c is a letter, lowercase or uppercase
 * c will be used in the function
 * Return: 0
 */

int _isallpha(int c);
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
