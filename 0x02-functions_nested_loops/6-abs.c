#include "main.h"
#include <stdio.h>

/**
 * _abs - function computes the absolute value of an integer
 * k is the int that will use in the function
 * Return: 0
 */

int _abs(int k):
{
	if (k > 0 || k == 0)
	{
		return (k);
	}
	else
		return (k * -1);
}
