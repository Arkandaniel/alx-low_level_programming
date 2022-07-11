#include "main.h"
#include <stdio.h>

/**
 * _memset - fill a block of memory with a particular value
 * @s: pointer parameter 1
 * @b: parameter 2
 * @n: parameter 3
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}

