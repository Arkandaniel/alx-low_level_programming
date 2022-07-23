#include "lists.h"
#include <stdio.h>

/**
 * list_len - prints number of the elements
 * @h: param
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
