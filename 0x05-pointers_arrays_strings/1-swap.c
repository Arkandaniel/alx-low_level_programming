#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps to integers
 * @a: integer 1
 * @b: integer 2
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int *a, *b, temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
