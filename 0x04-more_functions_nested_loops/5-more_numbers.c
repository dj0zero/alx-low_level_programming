#include "main.h"

/**
 * more_numbers - function prints numbers between 0 to 14
 * times 10
 * Return: 0
 */

void more_numbers(void)
{
	int i, ch;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 0; ch <= 14; ch++)
		{
			if (ch >= 10)
			{
				_putchar(ch / 10 + '0');
			}
		_putchar(ch % 10 + '0');
		}
		_putchar('\n');
	}
}
