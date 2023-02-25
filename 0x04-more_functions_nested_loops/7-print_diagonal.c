#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: print the character \  and end with a line
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;

		for (a = 0; a < n; a++)
		{
				_putchar ('\');
			}
			_putchar('\n');
		}
	}
}
