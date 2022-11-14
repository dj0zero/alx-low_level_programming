#include <stdio.h>

/**
 * main - function prints first 50 fibonacci number
 * followed by new line
 * Return: 0
 */

int main(void)
{
	int a;
	long int n1, n2, fn;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (a = 0; a < 48; a++)
	{
		fn = n1 + n2;
		printf(", %ld", fn);
		n1 = n2;
		n2 = fn;
	}
	printf("\n");
	return (0);
}
