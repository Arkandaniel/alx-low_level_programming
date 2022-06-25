#include <stdio.h>
#include "main.h"

/**
 *
 *
 */
void print_to_98(int n)
{
	int i;

	scanf("%d", n);
	for (i = n; i <= 98; i++)
	{
		printf("%d, ", i);
	}
}
