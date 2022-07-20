#include "main.h"
#include <stdio.h>

/**
 */
size_t print_list(const list_t *h)
{
	int n = 0;
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
	}
	return (n);
}
