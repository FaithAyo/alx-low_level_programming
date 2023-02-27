#include <stdio.h>

/**
 * _puts - Prints a string
 * @str: The string to a print
 * Retun: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
