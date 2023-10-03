#include "main.h"

/**
 * alloc_grid - function that return a pointer to a 2d array
 * @width: argument with width count
 * @height: argument with height count
 * Return: pointer to 2d array
 *
 */
int **alloc_grid(int width, int height)
{
	int x, y;
	int **grid;
	/*check if width and height is 0 or negative return NULL if so*/
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/*allocate memory for the outer array*/
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	/*allocate memory for the outer array*/
	for (x = 0 ; x < height ; x++)
	{
		grid[x] = malloc(width * sizeof(int));
		if (grid[x] == NULL)
		{
			/**if allocation fails then free allocated memory*/
			for (; x >= 0 ; x--)
			{
				free(grid[x]);
			}
			free(grid);
			return (NULL);
		}
	}
	/*initialize all elements of grid to 0*/
	for (x = 0 ; x < height ; x++)
	{
		for (y = 0 ; y < width ; y++)
		{
			grid[x][y] = 0;
		}
	}
	return (grid);

}
