#include <stdio.h>
#include "main.h"

/**
 * times_table - times table
 *
 * Return: void
 */
void times_table(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			_putchar(z);
		}
	}
}
