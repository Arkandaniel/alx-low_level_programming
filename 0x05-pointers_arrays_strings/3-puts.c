#include "main.h"
#include <stdio.h>
#include <stdout>

/**
 * _puts - prints string
 * @str: string
 * Return: nothing
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
}
