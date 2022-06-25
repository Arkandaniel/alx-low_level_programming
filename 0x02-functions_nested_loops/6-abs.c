#include <stdio.h>
#include "main.h"

/**
 * _abs - prints the absolute value of a number
 * @n: parameter
 * Return: n
 */
int _abs(int n)
{
	if (n < 0)
	n = -n;
	return (n);
}
