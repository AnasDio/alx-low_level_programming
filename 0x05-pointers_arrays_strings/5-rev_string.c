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
char c = s[0];
int counter = 0;
int i;

while (s[counter] != '\0')
counter++;
for (i = 0; i < counter; i++)
{
	counter--;
	c = s[i];
	s[i] = s[counter];
	s[counter] = c;
}
}
