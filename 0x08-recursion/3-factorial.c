#include "main.h"

/**
 * factorial - function returns the factorial of a given number
 * @n: will be number to find factorial of
 *
 * Return: factorial of n is n > 0
 * otherwise -1 if n < 0 to show error
 */

int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
