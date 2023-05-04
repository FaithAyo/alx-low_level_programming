#include "main.h"
#include <stddef.h>


/**
 * binary_to_uint - converts binary to unsigned int
 * @b: constant char pointer
 * Return: converted number or 0 if b != 0 | 1 or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int d, e, f;
	unsigned int cono = 0, beco;
	/* cono = converted number  and  beco = before conversion*/

	if (b == NULL)
		return (0);

	for (f = 0; b[f]; f++)
	{
		if (b[f] != '0' && b[f] != '1')
			return (0);
	}

	f--;

	for (d = 0; b[d]; d++)
	{
		beco = 1;

		for (e = 1; e <= (f - d); e++)
			beco = beco * 2;

		beco = beco * (b[d] - '0');
		cono = cono + beco;
	}
	return (cono);
}
