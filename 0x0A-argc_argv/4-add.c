#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - functions prints the sum of positive numbers
 * @argc: will be number of command line arguments
 * @argv: will be array name
 * Return: 1 if input in a non-integer
 * otherwise 0
 */

int main(int argc, char *argv[])
{
	int a, b, add = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(Argv[a]);
	}
	printf("%d\n", add);
	return (0);
}
