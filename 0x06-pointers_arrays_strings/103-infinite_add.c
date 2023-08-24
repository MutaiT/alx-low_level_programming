#include "main.h"

/**
 * infinite_add - A function that adds two numbers.
 *
 * @n1: The first number.
 *
 * @n2: The second number.
 *
 * @r: The buffer to store the result.
 *
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x = 0;
	int y = 0;

	while (n1[y] != '\0' || n2[y] != '\0')
	{
		int sum = (n1[y] - '0') + (n2[y] - '0') + x;

		if (sum > 9)
		{
			x = 1;
			sum -= 10;
		}
		else
		{
			x = 0;
		}

		r[y] = sum + '0';
		y++;

		if (y == size_r)
		{
			return (0);
		}
	}

	if (x == 1)
	{
		r[y] = '1';
		y++;
	}

	r[y] = '\0';
	return (r);
}
