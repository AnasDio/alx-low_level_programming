#include "main.h"
#include <stdlib.h>
/**
 * *_memset - fills memory with bytes
 * @s: memory
 * @b: char
 * @n: number of times
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}

	return (s);
}
/**
 * _calloc - allocates memory
 * @nmemb: number of elements in the array
 * @size: size
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
