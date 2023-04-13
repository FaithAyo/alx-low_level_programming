#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - convert binary to an unsigned int
 * @b: points to a string of 0 and 1
 * Return: 0 or b if null
 */
unsigned int binary_to_uint(const char *b)
{
	int array;
	unsigned int convertedno = 0;

	for (array = 0; b[array] != '\0'; array++)
		convertedno = 2 * convertedno + (b[array] - '0');
	return (convertedno);

		if (b != 0 || 1)
			return (0);
		else if (b == NULL)
			return (0);
}
