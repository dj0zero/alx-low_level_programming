#include "main.h"

/**
 * print_triangle - function prints a triangle,
 * followed by a new line
 * @size: will be the size of triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int a, b = 0;
	int space;

	if (size > 0)
	{
		while (b < size)
		{
			space = size - b - 1;
			
			while (a < size)
			{
				if (space > a)
				{
					_putchar('#');
				}
				a++;
			}
			b++;

			a = 0;

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
