#include <stdio.h>
#include "main.h"

/**
 * free_grid - clear an array passed into this
 * @grid: the array we need to free from memory
 * @height: The height of the array to clear.
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
void free_grid(int **grid, int height)
{
	int row = 0;

	while (row < height)
	{
		free(grid[row]);
		row++;
	}
	free(grid);
}
