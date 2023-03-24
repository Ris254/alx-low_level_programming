#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: 1 on success
 * on error -1 is returned and errno is set appropriately
 */

int putchar(char c);
{
	return (write(1, &c, 1));
}
