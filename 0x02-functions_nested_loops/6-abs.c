#include "main.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of an interger
 *
 * @int: the integer to be checked
 *
 * Return: 0 (Success)
 */
int _abs(int a)
{
if (a < 0)
{
	printf("%d\n",
	a * -1);
}
else
{
	printf("%d\n",
	a);
}
return (0);
}
