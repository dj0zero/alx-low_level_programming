#include "main.h"

/**
 * print_most_numbers - function prints numbers from 0 to 9,
 * followed by a new line
 * Return: 0
 */

void print_most_numbers(void)
{
	char c = '48';

	while (c <= '57')
	{
		if (c != '50' && c != '52')
		{
			_putchar(c);
		}
	c++;
	}
_putchar('\n');
}
