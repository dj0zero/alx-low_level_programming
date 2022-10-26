#include "main.h"
#include <stdio.h>

/**
 * print_rev - function prints a string in reverse,
 * followed by a new line
 * @s: will be used to declare *s
 * Return: 0
 */

void print_rev(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)

	for (c = c - 1; c >= 0; c--)
	
		putchar(s[c]);
	
	putchar('\n');
}
