#include "holberton.h"
/**
 *free_grid - Free the allocated memory 
 *@grid: pointer grid
 *@heigth: Heigth grid
 */

void free_grid(char **grid, int heigth)
{
	int i = 0;

	if (grid == NULL)
	{
		return;
	}

	while (i < heigth)
	{
		free(grid[i]);
		i++;
	}
}
