include "main.h"

/**
 * is_prime - A function that checks whether an integer is a prime number
 *
 * @n: Number input
 * @x: Number to be checked
 *
 * Return: 1 or 0
 */
int is_prime(unsigned int n, unsigned int x)
{
	if (n % x == 0)
	{
		if (n == x)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, x + 1));
}
/**
 * is_prime_number - Function that checks whether an integer is a prime number
 *
 * @n: Number input
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime_number(n, 2));
}
