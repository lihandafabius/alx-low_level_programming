#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_listint_safe - print function
  * @head:points to the first node in the list
  * Return: value returned
  */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr;
	size_t count;
	const listint_t *wait;

	curr = head;
	if (curr == NULL)
		exit(98);

	count = 0;
	while (curr != NULL)
	{
		wait = curr;
		curr = curr->next;
		count++;
		printf("[%p] %d\n", (void *)wait, wait->n);

		if (wait < curr)
		{
			printf("-> [%p] %d\n", (void *)curr, curr->n);
			break;
		}
	}

	return (count);
}
