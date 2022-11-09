#include "main.h"

/**
 * print_line - function draws straight line in terminal
 * @n: will be number of times character prints
 *
 * Return: 0
 */

void print_line(void)
{
	int b = 0;

	while (b < n && n > 0)
	{
		_putchar('_');
		b++;
	}
	_putchar('\n');
}
