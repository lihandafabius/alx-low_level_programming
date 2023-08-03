/**
 * set_bit - Function to set the value of a bit at index
 * @index: index of bit
 * Return: success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n | 1ul << index;
	return (1);
}
