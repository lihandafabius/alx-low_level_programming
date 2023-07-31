#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint - adds new nodes to the list
  * @head: first node  in the list
  * @n: variable to add to the list
  * Return: pointer to current position in list
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
