#include "lists.h"
#include <stdio.h>

/**
  * sum_listint - function to add all elements of a list
  * @head: first node in the list
  * Return: sum of all elements
  */
int sum_listint(listint_t *head)
{
	int x;

	for (x = 0; head; x += head->n, head = head->next)
		;
	return (x);
}
