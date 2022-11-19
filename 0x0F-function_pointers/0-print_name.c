#include "funciton_pointers.h"

/**
 * print_name - function taht prints a name
 * @name: will be name to print
 * @f: will be pointer to the function
 * Return: no return
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
