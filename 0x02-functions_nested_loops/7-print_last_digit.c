#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - as the name says
 *
 * @d: the integer to be used
 *
 * Return: last digit
 */
int print_last_digit(int d)
{
int a = d % 10;
if (a < 0)
{
	a = a * -1;
}
_putchar(a + '0');
return (a);
}
