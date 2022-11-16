#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - function checks if number is divisible
 * @num: will be number to be checked
 * @div: will be the divisor
 * Return: 0 if divisible
 * oterwise 1 in not
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - function checks if number is prime
 * @n: will be the number to be checked
 * Return: 0 if integer is not prime
 * other wise 1 if number is prime
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}
