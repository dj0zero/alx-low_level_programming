#include "main.h"

/**
 * print_line - function draws straight line in terminal
 * @n: will be the integer
 * Return: 0
 */

void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a <= n)
		{
			_putchar('_');
			a++
		}

	_putchar('\n');
	}

	else
	_putchar('\n');
}
