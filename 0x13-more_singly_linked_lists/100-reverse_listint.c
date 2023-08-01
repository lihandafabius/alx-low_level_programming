#include "lists.h"
#include <stdlib.h>

/**
 * reverse_recur - function to reverse the list
 * @first: first node to reverse
 * @second: second node to reverse
 * Return: void
 */
listint_t *reverse_recur(listint_t *first, listint_t *second)
{
	listint_t *ptr, *prev = NULL;

	ptr = first;
	while (ptr->next != second)
	{
		prev = ptr;
		ptr = ptr->next;
	}

	if (prev != NULL)
		prev->next = first;
	second = first->next;
	first->next = ptr->next;
	if (first != ptr && second != first)
		second = reverse_recur(second, first);
	ptr->next = second;
	return (ptr);
}

/**
 * reverse_listint - reverses a listint list
 * @head: points to the first node in the list
 * Return: success
 */
listint_t *reverse_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (NULL);

	*head = reverse_recur(*head, NULL);
	return (*head);
}
