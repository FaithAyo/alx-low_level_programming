#include "main.h"
/**
 * get_bit - returns the value of a bit
 * @n: unsigned long int
 * @index: unsigned int bit at a given index
 * Return: the value of the bit or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index);
{
	int a;

	if (index > 20)
		return (-1);

	for (a = 0; n; a++)
	{
		if (a 
