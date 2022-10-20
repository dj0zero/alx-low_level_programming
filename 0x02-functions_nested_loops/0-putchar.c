#include <main.h>

/**
 * main - funciton to print
 *
 * Return: 0
 */

int main(void)

{
	char _putchar[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	usigned int v;

	for (v = 0; v < sizeof(_putchar); v++)

	{
		_putchar(_putchar[v]);
	}
_putchar('\n');
return (0);
}
