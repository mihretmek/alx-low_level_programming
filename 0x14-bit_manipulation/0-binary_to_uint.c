#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - a function that converts a binary number
 * to an unsigned int
 * Return: converted number or 0
 * @b: string of 0 and 1 chars
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '1')
			i = (i << 1) | 1;
		else if (*b == '0')
			i <<= 1;
		else
			return (0);
		b++;
	}
	return (i);
}
