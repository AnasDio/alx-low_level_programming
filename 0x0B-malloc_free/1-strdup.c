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
	if (i == 0 || str == NULL)
	{
		return (0);
	}
	array = malloc(i * sizeof(char));
	while (k < i)
	{
		k++;
		*(array + k) = *(str + k);
	}
	return (array);
}
