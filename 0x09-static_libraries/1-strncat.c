#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strncat - char
 * @dest: char
 * @src: char
 * @n: int
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
