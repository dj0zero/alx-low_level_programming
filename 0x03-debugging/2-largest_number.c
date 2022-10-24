#include "main.h"

/**
 * largest_number - returns the laargest of 3 numbers
 * @a: will be the first integer
 * @i: will be the second integer
 * @n: will be the third integer
 * Return: largest number
 */

int largest_number(int a, int i, int n)
{
	int largest;

	if (a >= i && a >= n)
	{
		largest = a;
	}
	else if (i >= a && i >= n)
	{
		largest = i;
	}
	else
	{
		largest = n;
	}

	return (largest);
}
