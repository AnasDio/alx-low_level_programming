#include <stdio.h>
/**
 * main - print all alphabet except q and e
 *
 * Return: 0 (Success)
 */
int main(void)
{
int a;
for (a = 97; a <= 122; a++)
{
	if (a == 113 || a == 101)
	{
		continue;
	}
	else
		putchar(a);
}
putchar('\n');
return (0);
}
