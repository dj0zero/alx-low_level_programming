#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of two diagonals
 * of a square matrix of integers
 * @a: will be the input pointer
 * @size: will be size of matrix
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int j, sum1 = 0, sum2 = 0;

	for (j = 0; j < (size * size); j++)
	{
		if (j % (size + 1) == 0)
			sum1 += *(a + j);
		if (j % (size - 1) == 0 && j != 0 && j < size * size - 1)
			sum2 += *(a + j);
	}
	printf("%d, %d\n", sum1, sum2);
}
