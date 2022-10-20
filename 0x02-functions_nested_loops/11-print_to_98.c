#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function to print all natural numbers upto 98,
 * followed by a new line
 * n will be integer in function
 * Return: int
 */

void print_to_98(int n);
{
	while (n != 98)
	{
		printf("%i, ", n);
		if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}
	}
	printf("98\n");
}
