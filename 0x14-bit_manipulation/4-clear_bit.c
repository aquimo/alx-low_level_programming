#include "main.h"

/**
 * clear_bit - Clear bit used to set the value of a given bit to 0
 * @n: Is the pointer to the number to be changed
 * @index: Is a index of the bit to be cleared
 *
 * Return: Set 1 for success and -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
