#include <stdio.h>

/**
 * _strlen- returns the length of a string
 * @str: The length of the string
 *
 * Return: the length of @str.
 */
size_t _strlen(const char *str)

{
	size_t length = 0;
		while (*str++)
			length++;
	return (length);
}
