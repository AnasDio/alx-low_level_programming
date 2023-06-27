#include "main.h"
/**
 * print_rev - print a string in reverse
 *
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
long int i = 0;
while (*(s + i) != '\0')
{
	i++;
}
while (i >= 0)
{
	printf("%c",
	*(s + i));
	i--;
}
printf('\n');
}
