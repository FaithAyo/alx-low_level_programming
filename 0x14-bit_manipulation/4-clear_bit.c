#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at an index.
 * @n: num  of num
 * @index: starts from 0 of the bit you want to set
 * Return: 1 if  successful, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	num = ~(1 << index);
	*n = *n & num;

	return (1);
}
