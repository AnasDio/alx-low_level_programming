#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free the memory
 * @grid: 2d array
 * @height: height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(**(grid + i));
		i++;
	}
	free(grid);
}
