#include "main.h"

/**
 * _pow_recursion - function returns value of x raised to power y
 * @x: will be number to raise
 * @y: will be the power
 * Return: x raised to power y
 */

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
