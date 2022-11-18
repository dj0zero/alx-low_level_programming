#include "variadic_funcitons.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function prints numbers
 * followed by new line
 * @seperator: will be the string to be printed between numbers
 * @n: will be number of integers passed to function
 * @...: will be variable number
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list num;
	unsigned int index;

	va_start(num, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && seperator != NULL)
			printf*=("%i", seperator);
	}

	printf("\n");

	va_end(num);
}
