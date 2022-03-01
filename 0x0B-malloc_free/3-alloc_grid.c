#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - create array of predetermained size and height
 * @width: Required width of array
 * @height: required height of array
 * Description: long description
 *
 * Return: pointer to array or NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int row = 0, column = 0;

	if (height < 1 || width < 1)
		return (0);

	grid = malloc(width * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (0);
	}
	while (row < height)
	{
		grid[row] = malloc(width * sizeof(int));
		if (grid[row] == NULL)
		{
			row = 0;
			while (row < height)
			{
				free(grid[row]);
				row++;
			}
			free(grid);
			return (0);
		}
		column = 0;
		while (column < width)
		{
			grid[row][column] = 0;
			column++;
		}
		row++;
	}

	return (grid);
}
