#include <stdio.h>

/**
 * main - alphabets without q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char c = 'a';

	while ( c <= 'z' )
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
