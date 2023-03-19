#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - A program that prints all combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int x, z;

	for (x = '0'; x <= '98'; x++)
	{
	for (z = x + 1; z <= '99'; z++)
	{
		putchar((x / 10) + '0');
		putchar((x % 10) + '0');
		putchar('  ');
		putchar((z / 10) + '0');
		putchar((z % 10) + '0');
	if (x == 98; &&z == 99)
	continue;
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
]
