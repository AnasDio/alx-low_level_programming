#include "main.h"
/**
 * _strpbrk - finds the first occure of a string
 * @s: string 1
 * @accept: string 2
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		for (; *(accept + i); )
		{
			if (*s == *(accept + i))
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return ('\0');
}
