#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: integer parameter
 * return: 1 0 and -1 depending on the value
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		putchar('1');
	}
	else if (n == 0)
	{
		putchar('0');
		putchar('0');
	}
	else
	{
		putchar('-');
		putchar('1');
	}
	return (0);
}
