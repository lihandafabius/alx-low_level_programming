#include "lists.h"
#include <stdio.h>

/**
  * get_nodeint_at_index - gets the nth node of the list
  * @head: first node in the list
  * @index: last node
  * Return: pointer to the very last node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	x = 0;
	while (x < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		x++;
	}
	return (head);
}
