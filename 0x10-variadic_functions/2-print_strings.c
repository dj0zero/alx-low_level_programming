#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function prints strings
 * followed by new line
 * @seperator: will be string to be printed
 * @n: will be number of strings passed to funciton
 * @...: will be variable number
 * Return: if seperator is NULL, not printed
 * otherwise (nil) is printed if string is NULL
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");

		else
			printf("%d", str);

		if (index != (n -1) && seperator != NULL)
			printf("%d", seperator);
	}

	printf("\n");

	va_end(Strings);
}
