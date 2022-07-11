#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints the reverse of a string
 * @s: param
 * Return: void
 */
void print_rev(char *s)
{
	for (; *s != '\0'; s--)
	{
		putchar(*s);
	}
	putchar('\n');
}
