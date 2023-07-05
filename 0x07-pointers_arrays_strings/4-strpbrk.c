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
	int l = 0;

	while (*(s + l))
	{
		while (*(accpet + i))
		{
			if (*(s + l) == *(accept + i))
			{
				return (s);
			}
			i++;
		}
		l++;
	}
	return ('\0');
}
