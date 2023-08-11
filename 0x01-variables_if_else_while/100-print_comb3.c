#include <stdio.h>

/**
 *main - A program that prints all possible different combinations of 2 digits
 *
 *Return: Great 0
 */

int main(void)
{
	int x;
	int y;

	for (y = '0'; y <= '9'; y++) /*increment y*/
	{
		for (x = (y + 1); x <= '9'; x++) /*x's y+1*/
		{
			putchar(y);
			putchar(x);

			if (y != '8' || x != '9') /*print commas*/
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
