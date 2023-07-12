#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - 2d array
 * @width: width
 * @height: height
 * Return: pointer or null
 */
int **alloc_grid(int width, int height)
{
int **array;
int x = 0;
int y = 0;

if (width <= 0 || height <= 0)
{
	return (NULL);
}
array = malloc(sizeof(int *) * height);
if (array == NULL)
	return (NULL);
for (; x < height; x++)
{
	array[x] = malloc(sizeof(int) * width);
	if (array[x] == NULL)
	{
		for (; x >= 0; x--)
			free(array[x]);
		free(array);
		return (NULL);
	}
}
x = 0;
while (x < height)
{
	for (y = 0; y < width; y++)
		array[x][y] = 0;
	x++;
}
return (array);
}
