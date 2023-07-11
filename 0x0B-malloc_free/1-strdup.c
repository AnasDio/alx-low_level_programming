#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - copies another string
 * @str: string
 * Return: pointer if succes 0 if not
 */
char *_strdup(char *str)
{
	int i = 0;
	int k = 0;
	char *array;

	while (*(str + i) != '\0')
	{
		i++;
	}
	array = malloc((i + 1) * sizeof(char));
	if (array == NULL)
	{
		return (0);
	}
	while (*(str + k))
	{
		*(array + k) = *(str + k);
		k++;
	}
	return (array);
}
