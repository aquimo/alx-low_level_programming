#include "main.h"

/**
 * set_bit - Used to set a bit at a given index of the 1
 * @n: Is the pointer to the number to be changed
 * @index: Is a index of the bit to set to 1 success
 *
 * Return: Must return 1 for success and -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
