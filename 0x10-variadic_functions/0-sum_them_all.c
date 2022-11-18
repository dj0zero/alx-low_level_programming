#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function returns the sum of all its parameters
 * @n: will be the number of parameters
 * @...: will be variable number of parameter
 * Return: 0 if n == 0
 * otherwise sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int index, sum = 0;

	va_start(num, n);

	for (index = 0; index < n; index++)
		sum += va_arg(num, int);

	va_end(num);

	return (sum);
}
