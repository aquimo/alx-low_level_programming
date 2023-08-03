#include "main.h"

/**
 * get_bit - Get bit is to return the value of a bit
 * at any index of a decimal number
 * @n: Is the number to be searched
 * @index: Is the index the bit
 *
 * Return: Used to return the value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
