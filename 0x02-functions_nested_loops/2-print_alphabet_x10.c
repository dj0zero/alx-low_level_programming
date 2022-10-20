#include "main.h"

/**
 * print_alphabet_x10(void) - function to print alphabets 10 times,
 * followed by a new line
 * Return: 0
 */

void print_alphabet_10x(void);

{
	char c, d;

	for (d = 0; d <= 9; d++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
