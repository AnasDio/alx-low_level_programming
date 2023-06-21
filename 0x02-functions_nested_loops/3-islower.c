#include "main.h"
/**
 * _islower - checks for lower case alphabet
 *
 * @c: the char to be checked
 *
 * Return: 1 if the char is upper case 0 if the char is lower
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
	return (1);
}
else
{
	return (0);
}
}
