#include "main.h"

/**
 * print_numbers - prints number from 0 to 9
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}