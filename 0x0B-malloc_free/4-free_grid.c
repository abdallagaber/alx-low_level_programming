#include "main.h"

/**
 * free_grid -> a function that frees a 2 dimensional grid.
 *
 * @grid: grid is a 2 dimensional array.
 * @height: height is an integer argument.
 *
 * Return: void (no return).
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
