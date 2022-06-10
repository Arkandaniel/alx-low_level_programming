#include <stdio.h>
#include "main.h"

/**
 * print_alpahabet_x10 - prints alphabet 10x
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

		for ( c = 'a'; c <= 'z'; c++)
		{
			while ( i = 10 )
				i++;
			putchar(c);
		}
		putchar('\n');
}
