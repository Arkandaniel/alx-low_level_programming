#include "main.h"
#include <stdio.h>

/**
 * _puts - prints string
 * @str: string
 * Return: nothing
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
