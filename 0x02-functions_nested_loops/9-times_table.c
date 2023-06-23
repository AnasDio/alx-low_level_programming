#include "main.h"
#include <stdio.h>
/**
 * times_table -  prints out the time table from 0 to 9
 *
 * Return: void
 */
void times_table(void)
{
int a, b, c;
for (a = 0; a < 10; a++)
{
	for (b = 0; b < 10; b++)
	{
		c = a * b;
		printf("%d",
		c);
		if (b < 9 && c < 10)
		{
			printf(",  ");
		}
		else if (c > 10)
		{
			printf(", ");
	}
	printf("\n");
}
}
