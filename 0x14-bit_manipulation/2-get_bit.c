#include "main.h"
#include <stdio.h>
/**
 * get_bit - function to get the value of a bit at a given index
 * @n: integer to evaluate
 * @index: index starting from 0, of the bit we want to get
 * Return: Value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x;

	if (index > 64)
		return (-1);

	x = n >> index;

	return (x & 1);
}
