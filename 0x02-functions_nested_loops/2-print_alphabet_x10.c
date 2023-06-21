#include "main.h"
/**
 * print_alphabet_x10 - just as the name says
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
int a, b;
for (a = 0; a < 10; a++)
{
	for (b = 97; b <= 122; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
}
}
