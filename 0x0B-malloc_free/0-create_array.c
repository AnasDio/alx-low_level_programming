#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array using malloc
 * @size: size of the array
 * @c: start point
 *Return: 0 if success or null if fail
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	int i = 0;

	arr = malloc(size * sizeof(char));
	if (size == 0 || arr == NULL)
		return (0);
	while (i < size)
	{
		*(arr + i) = c;
		i++;
	}
	return (arr);

}
