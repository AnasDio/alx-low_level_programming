#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - combines strings
 * @s1: string 1
 * @s2: string 2
 * Return: null if fail
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int k = 0;
	int m = 0;
	int n = 0;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i) != '\0')
		i++;
	while (*(s2 + k) != '\0')
		k++;
	arr = malloc((i + k + 1) * sizeof(char));
	if (arr == NULL)
		return (0);
	while (*(s1 + m))
	{
		*(arr + m) = *(s1 + m);
		m++;
	}
	while (*(s2 + n))
	{
		*(arr + m) = *(s2 + n);
		m++;
		n++;
	}
	return (arr);
}
