#include "lists.h"
#include <stdlib.h>

/**
  * free_listint - function
  * @head: describe argument in the node
  */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
