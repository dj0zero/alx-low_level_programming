#include "main.h"

/**
 * more_numbers - function prints numbers from 0 to 14 ten times
 * followed by new line
 * Return: 0
 */

void more_numbers(void)
{
	char a, b;

	int c = 0;

	while (c < 10)
	{
		for (a = 0; a <= 14; a++)
		{
			b = a;
			if (a > 9)
			{
				_putchar('1');
				b = a % 10;
			}
			_putchar('0' + b);
		}
		_putchar('\n');
		c++;
	}
}
