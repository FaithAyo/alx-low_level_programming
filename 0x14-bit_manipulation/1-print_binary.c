#include "main.h"
/**
 * _power - calculate the base and power
 * @base: base of the exponet
 * @pow: power of the exponet
 * Return: value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int number;
	unsigned int i;

	number = 1;
	for (i = 1; i <= pow; i++)
		number *= base;
	return (number);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: num of representation
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, result;
	char flag;

	flag = 0;
	div = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (div != 0)
	{
		result = n & div;
		if (result == div)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
