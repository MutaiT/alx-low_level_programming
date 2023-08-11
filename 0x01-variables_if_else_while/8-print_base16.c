#include <stdio.h>

/**
 * main - A program that prints all numbers of base 16 in lowercase
 *
 * Return: Great 0
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	for (x = 97; x < 103; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
