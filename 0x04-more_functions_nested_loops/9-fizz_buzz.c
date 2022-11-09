#include <stdio.h>

/**
 * main - FizzBuzz code to print numbers from 1 to 100
 * Return: 0
 */

int main(void)
{
	int a = 1;

	while (a <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%a", a);
		}
		if (a != 100)
		{
			_putchar(' ');
		}

		a++;
	}
	_putchar('\n');
	return (0);
}
