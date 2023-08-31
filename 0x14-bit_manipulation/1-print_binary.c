#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number to be printed
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int x;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (temp = n, x = 0; (temp >>= 1) > 0; x++)
		;

	for (; x >= 0; x--)
	{
		if ((n >> x) & 1)
			printf("1");
		else
			printf("0");
	}
}
