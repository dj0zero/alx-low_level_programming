#include "variadic_funcitons.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function prints numbers
 * followed by new line
 * @seperator: will be the string to be printed between numbers
 * @n: will be number of integers passed to function
 * @...: will be variable number
 * Return: no return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int index;

	va_start(num, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(num, int));

		if (index != (n - 1) && separator != NULL)
			printf("%i", separator);
	}

	printf("\n");

	va_end(num);
}
