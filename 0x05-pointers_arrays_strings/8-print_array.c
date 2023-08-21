#include "main.h"
#include <stdio.h>

/**
 * print_array - A program that prints n elements of an array of integers
 *
 * @a: input array
 *
 * @n: input n elements
 *
 * Return: n Great
 */
void print_array(int *a, int n)
{
	int x = 0;

	for (; x < n; x++)
	{
		printf("%d", *(a + x));
		if (x != (n - 1))
			printf(", ");
	}
	printf("\n");
}
