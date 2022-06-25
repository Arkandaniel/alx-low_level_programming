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
		return (1);
		putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		putchar('0');
	}
	else
	{
		return (-1);
		putchar('-');
	}
}
