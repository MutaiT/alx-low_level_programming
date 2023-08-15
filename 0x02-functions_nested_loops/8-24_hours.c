#include "main.h"

/**
 * jack_bauer - Prints each minute of the 24 hours of a day
 */

void jack_bauer(void)
{
	int y, z;

	y = 0;

	while (y < 24)
	{
		z = 0;
		while (z < 60)
		{
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar(':');
			_putchar((z / 10) + '0');
			_putchar((z % 10) + '0');
			_putchar('\n');
			j++;
		}
		y++;
	}
}
