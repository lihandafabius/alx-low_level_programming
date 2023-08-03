/**
 * get_endianness -Function that returns the endianness of the machine
 * Return: success
 */
int get_endianness(void)
{
	int n = 1;

	return (*((char *) &n) + '0');
}
