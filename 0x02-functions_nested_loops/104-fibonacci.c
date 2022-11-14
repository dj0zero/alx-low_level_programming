#include <stdio.h>

/**
 * main - function that prints first 98 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int a, b, c;
	long int n1, n2, fn, fn2, n3, n4;

	n1 = 1;
	n2 = 2;
	b = c = 1;
	printf("%ld, %ld", n1, n2):
		for (a = 0; a < 96; a++)
		{
			if (b)
			{
				fn = n1 + n2;
				printf(", %ld", fn);
				n1 = n2;
				n2 = fn;
			}
			else
			{
				if (c)
				{
					n3 = n1 % 1000000000;
					n4 = n2 % 1000000000;
					n1 = n1 / 1000000000;
					n2 = n2 / 1000000000;
					c = 0;
				}
				fn2 = (n3 + n4);
				fn = n1 + n2 + (fn2 / 1000000000);
				printf(", %ld, %ld", fn);
				printf("%ld", fn2 % 1000000000);
				n1 = n2;
				n3 = n4;
				n2 = fn;
				n4 = (fn2 % 1000000000);
			}
			if (((n1 + n2) < 0) && b == 1)
				b = 0;
		}
	printf("\n");
	return(0)
}
