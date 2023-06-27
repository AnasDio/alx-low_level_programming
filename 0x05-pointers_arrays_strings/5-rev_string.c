#include "main.h"
/**
 * rev_string - reverse a string
 *
 * @s: the string
 *
 * Return: void
 */
void rev_string(char *s)
{
int i = 0, n = 0;
char c = *s[0];
while (*(s + i) != '\0')
{
	i++;
}
i--;
while (i >= 0)
{
	c = *(s + i);
	*(s + n) = c;
	i--;
	n++;
}
}
