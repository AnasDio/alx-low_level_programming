#include "main.h"
/**
 * _memset - a function to set a memory of aknown bytes to an array
 *
 * @s: the array
 * @b: bytes
 * @n: number
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
return (s);
}
