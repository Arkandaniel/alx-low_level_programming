#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - exponential function
 * @x: param 1
 * @y: param 2
 * Return: -1,1 or an exponential
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
