#include "main.h"

/**
 * _prints_rev_recursion - a function that prints in reverse
 * @s: the string printed
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
			_putchar(*s);
	}
}
