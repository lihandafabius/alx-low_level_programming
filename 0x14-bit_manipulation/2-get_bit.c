/**
 * get_bit - gets the value of a bit at index,
 * starting from least bit at 0
 * @n: The value to get bit from
 * @index: index of bit
 * Return: success
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x;

	if (index > 63)
		return (-1);

	x = 1 << index;
	return ((n & x) > 0);
}
