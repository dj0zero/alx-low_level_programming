#include "main.h"

/**
 * print_diagonal - function draws diagonal line on terminal
 * @n: will be number of times character prints
 * Return: 0
 */

void print_diagonal(int n)
{
	int a = 0, c;

	while (a < n && n > 0)
	{
		c = 0;
		while (c < a)
		{
			_putchar(' ');
			c++;
		}

		_putchar('\\');
		_putchar('\n');
		a++;
	}
	if (a == 0)
		_putchar('\n');
}
