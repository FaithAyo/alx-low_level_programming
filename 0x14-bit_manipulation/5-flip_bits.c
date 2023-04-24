#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int now;
	unsigned long int later = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		now = later >> i;
		if (now & 1)
			count++;
	}

	return (count);
}
