#include "main.h"
/**
 * alloc_grid - returns pointer to a 2d dimensional array of int
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to a 2d arr int
 */
int **alloc_grid(int width, int height)
{
	int **res;
	int x, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	res = malloc(sizeof(int *) * height);

	if (res == NULL)
	{
		return (NULL);
	}
	for (x = 0 ; x < height ; x++)
	{
		res[x] = malloc(sizeof(int) * width);
		if (res[x] == NULL)
		{
			free(res);
			for (y = 0 ; y <= height ; y++)
			{
				free(res[y]);
			}
			return (NULL);
		}
		for (y = 0 ; y < width ; y++)
		{
			res[x][y] = 0;
		}
	}
	return (res);
}
