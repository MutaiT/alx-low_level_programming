#include "main.h"

/**
 * infinite_add - A function that adds two numbers.
 * @n1: The first number
 *
 * @n2: The second number
 *
 * @r: The buffer to store the result
 *
 * @size_r: The size of the buffer
 *
 * Return: Result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sum = 0, x1, x2, y, z;

	for (x1 = 0; n1[x1]; x1++)
		;
	for (x2 = 0; n2[x2]; x2++)
		;
	if (x1 > size_r || x2 > size_r)
		return (0);
	x1--;
	x2--;
	size_r--;
	for (y = 0; y < size_r; y++, x1--, x2--)
	{
		if (x1 >= 0)
			sum += n1[x1] - '0';
		if (x2 >= 0)
			sum += n2[x2] - '0';
		if (x1 < 0 && x2 < 0 && sum == 0)
			break;
		r[y] = sum % 10 + '0';
		sum /= 10;
	}
	r[y] = '\0';
	if (x1 >= 0 || x2 >= 0 || sum)
		return (0);
	for (y--, z = 0; y > z; y--, z++)
	{
		sum = r[y];
		r[y] = r[z];
		r[z] = sum;
	}
	return (r);
}
