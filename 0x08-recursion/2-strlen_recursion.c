#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - return the length of a string
 * @s: param
 * Return: len
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	return (1 + _strlen_recursion(s + 1));
}
