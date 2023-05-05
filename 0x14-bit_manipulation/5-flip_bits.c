#include "main.h"
/**
 * flip_bits - returns the number of bits to flip to get from one number to another
 * @n: an integer
 * @m: an unsigned long integer
 * Return: 0 on sucess
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a;
	unsigned long int flip_bit;

	flip_bit = n ^ m;

	a = 0;
		while (flip_bit)
		{
			if ((flip_bit & 1) == 1)
				a++;
			flip_bit >>= 1;
		}
	return (a);
}
