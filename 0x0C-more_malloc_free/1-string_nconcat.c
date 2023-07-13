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

	while (s1[i] && s1)
		i++;
	while (s2[k] && s2)
		k++;

	if (n < k)
		array = malloc((i + n + 1) * sizeof(char));
	else
		array = malloc((i + k + 1) * sizeof(char));

	if (array == NULL)
		return (0);

	while (z < i)
	{
		array[z] = s1[z];
		z++;
	}
	while (n < k && z < (i + n))
	{
		array[z++] = s2[d++];
        }
	while (n >= k && z < (i + k))
	{
		array[z++] = s2[d++];
	}
	array[z] = '\0';
	return (array);
}
