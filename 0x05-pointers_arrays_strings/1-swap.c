#include "main.h"

/**
 * swap_int - A program that swaps the values of two numbers
 *
 * @a: first number
 *
 * @b: second number
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
