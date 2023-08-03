#include "main.h"
#include <unistd.h>
/**
 * _putchar - Putchar is to write the character c to standardout
 * @c: Is the character to be printed
 *
 * Return: If is in success return 1.
 * On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
