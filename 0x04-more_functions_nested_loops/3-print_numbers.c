#include "main.h"

/**
 * print_numbers - function that prints numbers from 0 to 9
 * followed by new line
 * @c: will be the character
 * Return: 0
 */

void print_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++);
	{
		_putchar(c);
	}
	_putchar('\n');
}
