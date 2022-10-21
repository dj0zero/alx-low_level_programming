#include "main.h"

/**
 * times_table - function to print the 9 times table,
 * starting with 0
 * Return: 0
 */

void times_table(void)
{
	int n = 0;
	int d = 0;

	for ( ; n <= 9; n++)
	{
	for ( ; d <= 9; d++)
	{
		if (((n * d) / 10) != 0)
			
			_putchar(((n * d) / 10) + '0');
		
		else if((n * d) % 10 != 0)
			
			_putchar (' ');
		
		else if (n == 0 && d > 0)

			_putchar(' ');
		_putchar((n * d) % 10 + '0');
		if (d < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	d = 0;
	}
}
