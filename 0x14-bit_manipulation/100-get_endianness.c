#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int n = 1;
	char *endian = (char *)&n;

	if (*endian == 1)
		return (1);

	return (0);
}
