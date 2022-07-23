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

	struct Node* current = h
	while (current != NULL)
	{
		n++;
		current = current->next;
		return (n);
	}
}
