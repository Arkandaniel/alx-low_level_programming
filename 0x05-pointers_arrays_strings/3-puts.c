#include "main.h"
#include <stdio.h>

/**
 * _puts - prints string
 * @str: string
 * Return: the answer
 */
void _puts(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	putchar('\n');
	return (i);
}
