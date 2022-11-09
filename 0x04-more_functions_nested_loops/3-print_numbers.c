#include "main.h"

/**
 * print_numbers - function prints numbers from 0 to 9,
 * followed by new line
 * Return: 0
 */

void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
