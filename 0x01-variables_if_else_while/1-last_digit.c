#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - a program to get the last digit of a number
 *
 * Return: 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 10 || n < -10)
{
	if (n % 10 == 0)
	{
	       printf("Last digit of %d is %d and is 0",
	       n, n % 10);
	}
	else if (n % 10 > 5)
	{
			printf("Last digit of %d is %d and is greater than 5",
			n, n % 10);
	}
	else
	{
			printf("Last digit of %d is %d and is less than 6 and not 0",
			n, n % 10);
	}
}
else
{
	if (n == 0)
	{
			printf("Last digit of %d is %d and is 0",
	    		n, n);
	}
    else if (n % 10 > 5)
	{
			printf("Last digit of %d is %d and is greater than 5",
			n, n);
	}
    else
	{
			printf("Last digit of %d is %d and is less than 6 and not 0",
			n, n);
	}
}
return (0);
}
