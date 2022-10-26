#include "main.h"

/**
 * _puts - function prints a string,
 * followed by a new line,
 * to stdout
 * @str: will be used to declare *str
 * Return: 0
 */

void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != 0; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
