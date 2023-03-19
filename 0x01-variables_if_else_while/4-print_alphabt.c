#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char j, q, e;

	q = 'q';
	e = 'e';

	for (j = 'a'; j <= 'z'; j++)
	if (j != q && j != e)
		putchar(j);
	putchar('\n');
	return (0);
}
