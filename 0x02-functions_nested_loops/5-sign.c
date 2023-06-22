#include "main.h"
/**
 * print_sign - checks if the input is positive or negative or zero
 *
 * @n: the number to be checked
 *
 * Return: 1 if positive or 0 if zero or -1 if negative
 */
int print_sign(int n)
{
if (n == 0)
{
	_putchar('0');
	return (0);
}
else if (n > 0)
{
	_putchar('+');
	return (1);
}
else
{
	_putchar('-');
	return (-1);
}
}
