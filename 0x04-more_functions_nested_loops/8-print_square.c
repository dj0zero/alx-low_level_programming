#include "main.h"

/**
 * print_square - function prints a square
 * followed by new line
 * @size: will be square size
 * Return: 0
 */

void print_square(int size)
{
	int a = 0, b;

	while (a < size && size > 0)
	{
		b = 0;
		while (b <= size)
		{
			_putchar('#');
			size++;
		}
		_putchar('\n');
		a++;
	}
	if (a == 0)
		_putchar('\n');
}
