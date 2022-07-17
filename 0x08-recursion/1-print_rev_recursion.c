#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints the reverse of a string
 * @s: param
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s);
	s++;
	putchar (*s);
	s--;
}
