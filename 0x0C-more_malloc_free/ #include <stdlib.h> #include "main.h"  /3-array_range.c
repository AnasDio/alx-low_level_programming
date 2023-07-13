#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates 
 * @min: min range
 * @max: max range
 * Return: pointer
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
		ptr[i] = min++;

	return (ptr);
}
