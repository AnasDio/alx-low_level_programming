#include <stdio.h>
/**
 * main - print alphabet lower and upper case
 *
 * Return: 0 (Success)
 */
int main(void)
{
int a;
for (a = 97; a <= 122; a++)
{
	putchar(a);
}
for (a = 65; a <= 90; a++)
{
	putchar(a);
}
putchar('\n');
return (0);
}
