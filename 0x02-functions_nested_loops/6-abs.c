#include "main.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of an interger
 *
 * @a: the integer to be checked
 *
 * Return: integer
 */
int _abs(int a)
{
if (a < 0)
{
	return (a * -1);
}
else
{
	return (a);
}
}
