#include "main.h"
/**
 * free_grid - frees a 2-D grid previously created by alloc_grid
 * @grid: pointer to 2-D grid
 * @height: number of rows
 * Return: nothing, frees memory
 **/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
