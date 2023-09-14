#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings followed by a new line.
 *
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If NULL, do not print.
 *              If one is NULL, print (nil).
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list j;
	char *s;
	unsigned int i;

	va_start(j, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(j, char *);

		if (s == NULL)
			printf("(nil)");

		else
			printf("%s", s);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(j);
}
