#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Function to convert a string to an unsigned int
 * @b: string to be cinverted
 * Return: success
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x, y;
	int z;

	if (b == NULL)
		return (0);

	for (z = 0; b[z]; z++)
	{
		if (b[z] != '0' && b[z] != '1')
			return (0);
	}

	for (y = 1, x = 0, z--; z >= 0; z--, y *= 2)
	{
		if (b[z] == '1')
			x += y;
	}

	return (x);
}
