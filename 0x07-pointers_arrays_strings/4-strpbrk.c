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

	while (*(s + i))
	{
		if (*(s + i) == *(accept + i))
		{
			return (s);
		}
	}
	return (0);
}
