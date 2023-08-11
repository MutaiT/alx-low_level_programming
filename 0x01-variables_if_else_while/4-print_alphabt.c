#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - A program that prints the alphabet without the alphabets q and e
 *
 * Return: Great 0
 *
 */
int main(void)
{
	int x;

	for (x = 97; x < 123; x++)
	{
		if (x != 101 && x != 113)
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
