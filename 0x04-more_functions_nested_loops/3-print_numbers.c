#include "main.h"
#include <stdio.h>

/**
 * print_numbers - function prints numbers from 0 to 9,
 * followed by new line
 * Return: 0
 */

void print_numbers(void)
{
	char c = '48';

	while (c <= '57')
	{
		_putchar(c);
		c++;
	}
_putchar('\n');
}
