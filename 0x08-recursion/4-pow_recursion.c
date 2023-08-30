#include "main.h"

/**
 * int _pow_recursion(int x, int y) - Function that prints x raised to power of y
 *
 *
 * @x: Base
 *
 * @y: Superscript
 *
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
