#include "main.h"
/**
 * clear_bit - set the value of bit to 0
 * @n: unsigned long int
 * @index: unsigned int
 * Return: 1 if it works | -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int clear_bit;

	clear_bit = 1;

	if (index > 99)
	{
		return (-1);
	}
	else
	{
		clear_bit = 1 << index;
		*n = *n & ~clear_bit;
	}
	return (1);
}
