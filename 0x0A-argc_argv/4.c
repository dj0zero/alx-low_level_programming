#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - function prints the sum of positive numbers
 * followed by new line
 * @argc: will be the number of comand line arguments
 * @argv:: will be array name
 * Return: 1 if non-integer is inputed
 * otherwise 0
 */

int main(int argc, char *argv[])
{
	int a, b, length, sum;
	char *ptr;

	if (argc < 2)
	printf("0\n");
	else
	{
		sum = 0;
		for (a = 1; a < argc; a++)
		{
			ptr = argv[a];
			legnth = strlen(ptr);

			for (b = 0; b < length; b++)
			{
				if (isdigit(*(ptr + b)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[a]);
		}

		printf("%d\n", sum);
	}
	return (0);
}
