#include <stdio.h>
#include "main.h"

/**
 * print_alpahabet_x10 - prints alphabet 10x
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

		for ( i = 0; i < 10; i++)
		{
			for ( c = 'a'; c <= 'z'; c++)
			putchar(c);
		}
		putchar('\n');
}
