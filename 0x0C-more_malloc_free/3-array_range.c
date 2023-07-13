#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array
 * @min: minimum range
 * @max: maximum range
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, k;

	if (min > max)
		return (NULL);

	k = max - min + 1;

	arr = malloc(sizeof(int) * k);

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		arr[i] = min++;

	return (ptr);
}
