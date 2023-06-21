#include "main.h"
/**
 * _isalpha - check if input is alpha or not
 *
 * @c: the input to be checked
 *
 * Return: 0 if it not alphabet and 1 if its an alphabet
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
	return (1);
}
else
{
	return (0);
}
}
