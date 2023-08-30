#include "main.h"

/**
 * _pow_recursion - Calculates the result of x raised to the power of y
 *
 * @x: The base number
 * @y: The exponent
 *
 * Return: The result of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		/* Negative exponent is not supported, so return -1 to indicate an error */
		/* return -1; */
	}
	else if (y == 0)
	{
		/* Any number raised to the power of 0 is 1 */
		/* return 1; */
	}
	else
	{
		/* Recursively calculate x^y by multiplying x with x^(y-1) */
		/* return x * _pow_recursion(x, y - 1); */
	}
}
