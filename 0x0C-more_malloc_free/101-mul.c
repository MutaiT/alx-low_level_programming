#include "main.h"
#include <stdlib.h>

/**
 * _calloc - calloc function
 *
 * @nmemb: Number of elements
 * @size: Size of each element
 *
 * Return: Pointer to the memory space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	char *y;

	if (size == 0 || nmemb == 0)
		return (NULL);
	y = malloc(nmemb * size);
	if (y == NULL)
		return (NULL);
	for (x = 0; x < nmemb * size; ++x)
		y[x] = 0;
	return (y);
}

/**
 * lenstr - Gets the length of a string
 *
 * @s - The string
 *
 * Return: Length of the string
 */
int lenstr(char *s)
{
	int x;

	for (x = 0; s[x]; ++x)
		;
	return (x);
}

/**
 * _prints - Prints using putchar function
 *
 * @str: String to be printed
 *
 * Return: No value
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*(str++));
}

/**
 * _isdigit
 *
 * @s1: String
 *
 * Return: 0 or 1
 * 0 if successful
 * 1 if fail
 */
int _strdigit(char *s1)
{
	if (*s1 == '-' || *s1 == '+')
		++s1;
	while (*s1)
	{
		if (*s1 < '0' || *s1 > '9')
		{
			return (0);
		}
		++s1;
	}
	return (1);
}

/**
 * reverse_str - Reverse string
 *
 * @First: First index
 * @Last: Last index
 * @str: String to be reversed
 *
 * Return: No value
 */
void rev_num_str(int First, int Last, char *str)
{
	int x, y;
	char z;

	while (str[Last] == 0 && Last != First)
		--Last;
	for (x = First, y = Last; x <= y; ++x, --y)
	{
		z = str[x] + '0';
		str[x] = str[y] + '0';
		str[y] = z;
	}
}

/**
 * _multiply - Multiply a long string
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to the answer
 */
char *strmul(char *s1, char *s2)
{
	int v1, v2, x, y, c, d, n = 0;
	char *r;
	char mul, mul_, sum, sum_;

	if (*s1 == '-')
	{
		n ^= 1;
		++s1;
	}
	if (*s2 == '-')
	{
		n ^= 1;
		++s2;
	}
	v1 = lenstr(s1);
	v2 = lenstr(s2);
	r = _calloc(v1 + v2 + 1 + n, sizeof(char));
	if (r == NULL)
		return (NULL);
	if (n)
		r[0] = '-';
	for (x = v2 - 1, c = n; x >= 0; --x, ++c)
	{
		mul_ = 0;
		sum_ = 0;
		for (y = v1 - 1, d = c; y >= 0; --y, ++d)
		{
			mul = (s1[y] - '0') * (s2[x] - '0') + mul_;
			mul_ = mul / 10;
			mul %= 10;
			sum = r[d] + mul + sum_;
			sum_ = sum / 10;
			sum %= 10;
			r[d] = sum;
		}
		r[d] = sum_ + mul_;
	}
	rev_num_str(n, d, r);
	return (r);
}

/**
 * main - man function
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Exit status
 */
int main(int argc, char *argv[])
{
	char *a;

	if (argc != 3)
	{
		_puts("Error\n");
		exit(98);
	}
	if (!_strdigit(argv[1]) || !_strdigit(argv[2]))
	{
		_puts("Error\n");
		exit(98);
	}
	a = strmul(argv[1], argv[2]);
	if (a == NULL)
	{
		_puts("Error\n");
		exit(98);
	}
	_puts(a);
	_putchar('\n');
	free(a);
	exit(EXIT_SUCCESS);
}
