#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function frees a 2 dimensional array
 * @grid: will be the 2 dimensional array
 * @height: will be grid height
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
