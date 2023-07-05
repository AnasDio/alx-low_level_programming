#include "main.h"
/**
 * _strpbrk - finds the first occure of a string
 * @s: string 1
 * @accept: string 2
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
