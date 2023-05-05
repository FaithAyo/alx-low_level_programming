#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: unsigned long int
 * @index: unsigned int
 * Return: 1 if sucessful | -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int set_bit;

	set_bit = 1;

		if (index > 99)
		{
			return (-1);
		}
		else
		{
			set_bit = 1 << index;
			*n = *n | set_bit;
		}
	return (1);
}
