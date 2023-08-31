#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: char string to be converted
 * Return: always succes(converted string)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int y, z;
	int x;

	if (b == NULL)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
	}

	for (z = 1, y = 0, x--; x >= 0; x--, z *= 2)
	{
		if (b[x] == '1')
			y += z;
	}

	return (y);
}
