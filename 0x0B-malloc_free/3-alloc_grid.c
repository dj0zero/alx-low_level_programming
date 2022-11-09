#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function returns pointer to 2 dimension array of integers
 * @width: will be the array width
 * @height: will be the array height
 * Return: NULL if width or height is 0 or less
 * otherwise pointer to the array of integers
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int wid_index, hgt_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		grid[hgt_index] = malloc(sizeof(int) * width);

		if (grid[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index--)
				free(grid[hgt_index]);

			free(grid);
			return (NULL);
		}
	}

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
			grid[hgt_index][wid_index] = 0;
	}

	return (grid);
}
