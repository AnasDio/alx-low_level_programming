#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - as the name says
 *
 * @a: the integer to be used
 *
 * Return: last digit
 */
int print_last_digit(int a)
{
a = a % 10;
_putchar(a + '0');
return (a);
}
