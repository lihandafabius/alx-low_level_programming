#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	char i;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');

	for (i = 'a'; i <= 'f'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
