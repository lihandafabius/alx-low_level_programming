#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * delete_nodeint_at_index - deletes a node at index
  * @head: first node in the list
  * @index: location of the node to delete
  * Return: pointer to head of list
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *curr, *prev;

	if (!head || !*head)
		return (-1);
	curr = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);
		return (1);
	}
	for (x = 0; x < (index - 1); x++)
	{
		curr = curr->next;
		if (curr == NULL)
			return (-1);
	}
	prev = curr->next;
	curr->next = prev->next;
	free(prev);
	return (1);
}
