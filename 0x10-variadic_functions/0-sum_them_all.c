#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - This function calculates the sum of its parameters.
 *
 * @n: The number of parameters to be passed to the function.
 * @...: A variable number of parameters to be summed.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all the parameters.
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int i, j = 0;

	va_start(x, n);

	for (i = 0; i < n; i++)
		j += va_arg(x, int);

	va_end(x);

	return (j);
}
