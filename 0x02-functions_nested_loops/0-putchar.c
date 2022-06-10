#include <stdio.h>

/**
* main - Prints putchar
*
* Return: Always 0
*/
int main(void)
{
    int c;

    for (c = '_putchar'; c)
    {
	    putchar(c);
    }
    putchar('\n');
    return (0);
}
