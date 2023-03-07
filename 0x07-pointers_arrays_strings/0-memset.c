#include "main.h"

/**
 * _memset - function fill the first n bytes of the memory area pointed
 * to by s with the constant byte b
 * @n: fills the first n bytes
 * @s: memory area pointed to by s
 * @b: constant byte b
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
