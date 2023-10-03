#include "main.h"

/**
 * free_grid - function that frees all allocated mem form 2d matrix
 * @grid: function argument double pointer to 2d matrix
 * @height: colum count of 2d matrix
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int x;
	/*free each row of grid*/
	for (x = 0 ; x < height ; x++)
	{
		free(grid[x]);
	}
	/*free the grid itself*/
	free(grid);
}
