#include "main.h"

/**
 * print_square - function prints a square,
 * followed by new line
 * @size: will be size of square
 * Return: 0
 */

void print_square(void)
{
	int a = 0;
	int b = 0;

	if (size > 0)
	{
		while (a < size)
		{
			while (b < size)
			{
				_putchar('#')
				b++;
			}
			b = 0;
			a++;
		}
	}
	else
		_putchar('\n');
}
