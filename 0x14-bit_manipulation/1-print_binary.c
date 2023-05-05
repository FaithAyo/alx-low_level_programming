#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: number representative
 * Return: binary representation
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar(n + '0');
	}
	else if (n == 1)
	{
		_putchar(n + '0');
	}

	else
	{
		print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
}
