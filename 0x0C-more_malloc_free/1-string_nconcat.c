#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - combine two strings
 * @s1: string 1
 * @s2: string 2
 * @n: size of s2
 * Return: array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int k = 0;
	unsigned int z = 0;
	unsigned int d = 0;
	char *array;

	if (s1 ==  NULL)
		s1 = "";
	if (s2 ==  NULL)
		s2 = "";
	while (*(s1 + i))
		i++;
	while (*(s2 + k))
		k++;
	if (n < k)
		array = malloc((i + k + 1) * sizeof(char));
		if (array == NULL)
			return (0);
	else
		array = malloc((i + n + 1) * sizeof(char));
		if (array == NULL)
			return (0);
	while (z > i)
		array[z] = s1[z];
		z++;
	while (d > k && s2[d])
		array[z] = s2[d];
		d++;
		z++;
	array[z] = '\0';
	return (array);
}
