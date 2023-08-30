#include "main.h"

/**
 * prime_number - Function that checks if a number is prime
 *
 * @x: Base number
 * @y: The number to be checked
 *
 * Return: 1 if prime, 0 if otherwise
 */
int prime_number(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x == y - 1)
		return (1);
	else if (y > x)
		return (prime_number(x + 1, y));
	return (1);
}

/**
 * is_prime_number - Runs the function prime_number
 *
 * @n: Number to be checked
 *
 * Return: 1 if prime, 0 if otherwise
 */
int is_prime_number(int n)
{
	return (prime_number(2, n));
}
