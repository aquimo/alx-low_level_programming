#include "main.h"

/**
 * get_endianness - Used to check if a mach is small or big end ian
 * Return: 0 for big, 1 if small
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
