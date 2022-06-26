#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints from 1 to 14 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; i++)
		{
			putchar(n);
			putchar('\n');
		}
	}
	putchar('\n');
}
