#include "main.h"
#include <stdio.h>

/**
 * main - function prints number of arguments passed into it
 * @argc: will be number of command line arguemnts
 * @argv: will be array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (a = 0; *argv; a++, argv++);

		printf("%d\n", a - 1);
	}

	return (0);
}
