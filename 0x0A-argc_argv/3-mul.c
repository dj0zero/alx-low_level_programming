#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that multiplies two numbers printing the product
 * followed by new line
 * @argc: will be the number of command line arguments
 * @argv: will be array name
 * Return: 1 if program doesn't recieve two arguments
 * otherwise 0
 */

int main(int argc, char *argc[])
{
	int a, b;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		b = 1;

		for (a = 1; a < 3; a++)
			b *= atoi(argv[a]);

		printf("%d\n", b);
	}

	return (0);
}
