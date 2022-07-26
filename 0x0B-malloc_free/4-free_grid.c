#include "main.h"
/**
 * free_grid - free memory allocated to grid
 * by alloc_grid()
 * @grid: grid to free
 * @height: height to free
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
