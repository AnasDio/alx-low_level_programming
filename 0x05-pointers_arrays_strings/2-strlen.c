#include "main.h"
/**
 * _strlen - a function that calculate the lenght of a string
 *
 * @s: string
 *
 * Return: the lenght value
 */
int _strlen(char *s)
{
int i = 0;
while (*(s + i) != '\0')
{
	i++;
}
return (i);
}
