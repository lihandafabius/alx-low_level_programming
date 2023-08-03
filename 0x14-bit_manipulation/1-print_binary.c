#include <unistd.h>
#include <limits.h>

/**
 * print_binary: function that prints unsigned long integer
 * @n:
 * Return: success
 */
void print_binary(unsigned long int n)
{
	unsigned long int printbit = 1ul << 63;
	char x = '0';

	while (!(printbit & n) && printbit != 0)
		printbit = printbit >> 1;
	if (printbit == 0)
		write(1, &x, 1);
	while (printbit)
	{
		if (printbit & n)
			x = '1';
		else
			x = '0';
		write(1, &x, 1);
		printbit = printbit >> 1;
	}
}
