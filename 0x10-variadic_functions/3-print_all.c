#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - Prints a character.
 *
 * @arg: Argument count
 *
 */
void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
		printf("%c", c);
}

/**
 * print_int - Prints an integer.
 *
 * @arg: Argument count
 *
 */
void print_int(va_list arg)
{
	int i;

	i = va_arg(arg, int);
		printf("%d", i);
}

/**
 * print_float - Prints a float.
 *
 * @arg: Argument count
 *
 */
void print_float(va_list arg)
{
	float n;

	n = va_arg(arg, double);
		printf("%f", n);
}

/**
 * print_string - Prints a string.
 *
 * @arg: Argument count
 *
 */
void print_string(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);

	if (s == NULL)
	{
		printf("(nil)");

		return;
	}

	printf("%s", s);
}

/**
 * print_all - Prints anything followed by a new line.
 *
 * @format: A string of characters representing the argument types.
 * @...: A variable number of arguments to be printed.
 *
 * Description: Any argument not of type char, int, float,
 *              or char * is ignored.
 *              If a string argument is NULL print (nil)
 */
void print_all(const char * const format, ...)
{
	va_list a;
	int x = 0, y = 0;
	char *s = "";

	printer_t funcs[] = {

		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
};

	va_start(a, format);

	while (format && (*(format + x)))
{
	y = 0;

	while (y < 4 && (*(format + x) != *(funcs[y].symbol)))
		y++;

	if (y < 4)
	{
		printf("%s", s);
		funcs[y].print(a);
		s = ", ";
	}

	x++;
}

	printf("\n");

	va_end(a);
}
