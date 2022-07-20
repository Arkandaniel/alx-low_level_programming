#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list - prints all the list_t element
 * @h: param
 * Return: n
 */
size_t print_list(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			n++;
		}
	}
	return (n);
}
