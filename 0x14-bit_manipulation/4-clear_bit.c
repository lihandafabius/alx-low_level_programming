/**
 * clear_bit -Function to  clear the value of a bit at index
 * @n: The value  to get bit from
 * Return: succes
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n & ~(1ul << index);
	return (1);
}
