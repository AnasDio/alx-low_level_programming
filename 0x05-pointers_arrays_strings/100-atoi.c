#include "main.h"
/**
 * _atoi - converts a string to an integer
 *
 * @s: string
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
int a = 0, k = 0, x = 0, len = 0, f = 0, digit = 0;

while (s[len] != '\0')
{
	len++;
}
while (a < len && f == 0)
{
	if (s[a] == '-')
	{
		++k;
	}
	if (s[a] >= '0' && s[a] <= '9')
	{
		digit = s[a] - '0';
		if (k % 2)
			digit = -digit;
		x = x * 10 + digit;
		f = 1;
		if (s[a + 1] < '0' || s[a + 1] > '9')
			break;
		f = 0;
	}
	a++;
}
	if (f == 0)
		return (0);
	return (x);
}
