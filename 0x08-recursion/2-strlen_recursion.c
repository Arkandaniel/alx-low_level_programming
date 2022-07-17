#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - return the length of a string
 * @s: param
 * Return: len
 */
int _strlen_recursion(char *s)
{
	int len;

	len = strlen(*s);
	if (len != 0)
	_strlen_recursion(s);
	return (len);
}
