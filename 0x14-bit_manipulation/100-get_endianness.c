#include "main.h"
/**
 * get_endianness - checks endianness
 * @void: void
 * Return: 0 if big endian 0r 1 if little endian
 */
int get_endianness(void)
{
	char *endian;
	int a;

	a = 1;
	endian = (char *)&a;
	return (*endian);
}
