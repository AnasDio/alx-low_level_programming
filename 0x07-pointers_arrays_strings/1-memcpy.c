#include "main.h"
/**
 * _memcpy - copies area of memory into another
 *
 * @dest: destination area
 *
 * @src: source
 *
 * @n: number of bytes
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int k = n;

	while (i < k)
	{
		src[i] = dest[i];
		n--;
		i++;
	}
	return (dest);
}
