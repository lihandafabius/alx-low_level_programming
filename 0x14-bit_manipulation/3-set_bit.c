#include "main.h"

/**
 * set_bit - function that sets value of a bit to 1 at a given index
 * @n: value  passed by pointer
 * @index: The index position to change
 * Return: Success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > 64)
		return (-1);

	for (x = 1; index > 0; index--, x *= 2)
		;
	*n += x;

	return (1);
}
