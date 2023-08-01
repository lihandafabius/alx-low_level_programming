#include "lists.h"
#include <stdio.h>

/**
  * reverse_listint - reverse function
  * @head: points to the first head
  * Return: return value
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *wait;
	listint_t *curr;

	if (*head == NULL)
		return (NULL);

	curr = *head;
	*head = curr->next;
	wait = (*head)->next;
	curr->next = NULL;
	if (*head == NULL)
	{
		*head = curr;
		return (curr);
	}

	while (wait != NULL)
	{
		(*head)->next = curr;
		curr = *head;
		*head = wait;
		wait = (*head)->next;
	}

	(*head)->next = curr;
	return (*head);
}
