#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strstr - char
 * @haystack: char
 * @needle: char
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
