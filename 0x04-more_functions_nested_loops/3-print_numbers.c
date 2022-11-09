#include "main.h"

/**
 * print_numbers - function that prints numbers from 0 to 9
 * followed by new line
 *
 * Return: 0
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++);
	{
		_putchar(c);
	}
	_putchar('\n');
}
