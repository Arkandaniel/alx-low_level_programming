#include "main.h"
#include <stdio.h>

/**
 * factorial - a factorial function
 * @n: param
 * Return: -1,1 or a factorial of a number
 */
int factorial(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
