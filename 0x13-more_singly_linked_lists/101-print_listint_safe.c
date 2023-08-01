#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * find_listint_loop_pl - function to find a loop
 * @head: points to the first node in the list
 * Return: success
 */
listint_t *find_listint_loop_pl(listint_t *head)
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
 * print_listint_safe - function to print the list
 * @head: points to the first node in the list
 * Return: Returns nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	int x;
	listint_t *loop;

	loop = find_listint_loop_pl((listint_t *) head);

	for (len = 0, x = 1; (head != loop || x) && head != NULL; len++)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == loop)
			x = 0;
		head = head->next;
	}

	if (loop != NULL)
		printf("-> [%p] %d\n", (void *) head, head->n);
	return (len);
}
