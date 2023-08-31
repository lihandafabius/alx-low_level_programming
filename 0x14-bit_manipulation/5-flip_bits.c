#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function that flips bits to convert one number to another number
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	int counter;

	x = n ^ m;
	counter = 0;

	while (x)
	{
		counter++;
		x &= (x - 1);
	}

	return (counter);
}

