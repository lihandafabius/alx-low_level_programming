#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop_fl - function to find a loop
 * @head: points to the first node in the list
 * Return: success
 */
listint_t *find_listint_loop_fl(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}
	return (NULL);
}

/**
 * free_listint_safe - function that frees a list
 * @h: head of list
 * Return: returns  no of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loop;
	size_t len;
	int x = 1;

	if (h == NULL || *h == NULL)
		return (0);

	loop = find_listint_loop_fl(*h);
	for (len = 0; (*h != loop || x) && *h != NULL; *h = next)
	{
		len++;
		next = (*h)->next;
		if (*h == loop && x)
		{
			if (loop == loop->next)
			{
				free(*h);
				break;
			}
			len++;
			next = next->next;
			free((*h)->next);
			x = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}
