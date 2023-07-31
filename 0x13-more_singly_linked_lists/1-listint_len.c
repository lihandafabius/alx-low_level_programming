#include <stdio.h>
#include "lists.h"

/**
  * listint_len - gets the number of nodes in a list
  * @h: singly linked list to print
  * Return: number of nodes in the list
  */
size_t listint_len(const listint_t *h)
{
	size_t x;

	for (x = 0; h; x++)
		h = h->next;
	return (x);
}
