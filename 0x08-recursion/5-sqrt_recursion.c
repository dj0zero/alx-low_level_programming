#include "main.h"

/**
 * find_sqrt - function returns the natural square root of number
 * @num: will be the number to find square root
 * @root: will be root to test
 * Return: natural square root of number
 * otherwise -1 if number doesn't have natural sqrt
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - function returns natural square root of number
 * @n: will be number to find square root of
 * Return: natural square root of number
 * otherwise -1 if number has no natural sqrt
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
