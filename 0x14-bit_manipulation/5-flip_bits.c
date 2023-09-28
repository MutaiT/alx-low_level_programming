#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 *             to get from one number to another
 *
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m, l = 0;

	while (x > 0)
	{
		l += (x & 1);
		x >>= 1;
	}

	return (l);
}
