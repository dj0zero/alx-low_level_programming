#include "main.h"

/**
 * print_last_digit - function prints the value of last digit
 * @c: this will be used in the function
 * Return: i
 */

int print_last_digit(int c)
{
	int d = c % 10;

	if (d < 0)
	{
		d = (d * -1);

	}
	_putchar(d + '0');
	return (d);
}

