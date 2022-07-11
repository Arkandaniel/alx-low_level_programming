#include "main.h"
#include <stdio.h>
#include <string>

/**
 * _memcpy - copies from one memo area to another
 * @dest: destination memo
 * @src: source memo
 * @n: amount of byte
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
