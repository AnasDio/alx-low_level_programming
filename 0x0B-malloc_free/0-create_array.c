#include "main.h"
#include <stdio.h>
/**
 * create_array - creates an array using malloc
 * @size: size of the array
 * @c: start point
 *Return: 0 if success or null if fail
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	arr = malloc(size * sizeof(char));
	*arr = c;
	if (size == 0)
		return (0);
	else
		return (arr);
}
