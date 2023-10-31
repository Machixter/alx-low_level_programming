#include "main.h"
/**
 * free_grid - free mem prev allocated
 * @grid: pointer to arr
 * @height: num of rows
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0 ; x < height ; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
