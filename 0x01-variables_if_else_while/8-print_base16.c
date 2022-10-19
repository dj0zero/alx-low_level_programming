#include <stdio.h>

/**
 * main - prints all the numbers of base 16
 * in lowercase,
 * followec by a new line
 * Return: 0
 */

int main(void)
{
	char a[16] = "0123456789abcdef";
	int i = 0;

	while (i < 16)
	{
		putchar(a[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
