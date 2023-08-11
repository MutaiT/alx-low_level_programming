#include <stdio.h>

/**
 *main - A program that prints all possible different combinations of 3 digits
 *Return: Great 0
 */

int main(void)
{
	int x;
	int y;
	int z;

	for (z = '0'; z <= '9'; z++)
	{
		for (y = (z + 1); y <= '9'; y++)
		{
			for (x = (y + 1); x <= '9'; x++)
			{
				putchar(z);
				putchar(y);
				putchar(x);
				if (z != '7' || y != '8' || x != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
