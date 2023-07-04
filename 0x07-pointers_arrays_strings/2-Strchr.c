#include "main.h"
/**
 * _strchr - a function that finds a char in a string
 *
 * @s: the string
 * @c: the char
 *
 * Return: c if found or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (c);
		}
		else
			return (NULL);
}
