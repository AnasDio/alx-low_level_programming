#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
int a, b;
for (a = 0; a < 24; a++)
{
	for (b = 0; b < 60; b++)
	{
		if (b < 10 && a < 10)
		{
			printf("0%d:0%d\n",
			a, b);
		}
		else
		{
			printf("%d:%d",
			a, b);
		}
	}
}
}
