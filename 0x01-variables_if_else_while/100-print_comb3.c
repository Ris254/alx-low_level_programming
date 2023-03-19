#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that prints all possible combinations of two digits
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int x, z;

	for (x = '0'; x < '9'; x++)
	{
	for (z = x + 1; z <= '9'; z++)
	{
	if (x != z)
	{
		putchar(x);
		putchar(z);
	if (x == '8' && z == '9')
	continue;
		putchar(',');
		putchar('');
	}
	}
	}
	putchar('\n');
	return (0);
}

