#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string
 * @s: param
 * Return: The string
 */
void _puts_recursion(char *s)
{
	if (s == '\0')
	{
		return (0);
		_puts_recursion(s++);
	}
}
