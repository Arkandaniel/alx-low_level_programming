#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints the reverse of a string
 * @s: param
 * Return: void
 */
void print_rev(char *s)
{
	int i, n;

	n = strlen(s);
	for (i = n - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
