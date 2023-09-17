#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Custom printf function that handles c, s and %
 *
 * @format: Format string
 * @...: Arguments to be taken
 *
 * Return: 0 Success
 */
int _printf(const char *format, ...) /* Function prototype */
{
	va_list args; /* Create a va_list macro to hold the variable arguments */

	va_start(args, format); /* Initialize va_list */

	int char_count = 0; /* Initialize the character count */
	int i;
	/* Iterate through the format string */
	for (i = 0; format[i] != '\0'; i++)
	{
		/* Check if the current character is not a format specifier */
		if (format[i] != '%')
		{
			putchar(format[i]); /* Print the character */
			char_count++;
		}
		else
		{
			i++; /* Move to the next character after '%' */

			switch (format[i])
			{
				case 'c':

					/* Fetch the next character argument and print it */
					char c = va_arg(args, int);

					putchar(c);
					char_count++;

					break;
				case 's':
					/* Fetch the next string argument and print it */
					char *str;
					str = va_arg(args, char *);

					int j;

					for (j = 0; str[j] != '\0'; j++);
					{

						putchar(str[j]);
						char_count++;
						break;
					}

				case '%':
					/* Print a literal '%' character */

					putchar('%');
					char_count++;
					break;

				default:
					/* Unknown format specifier, print it as is */
					putchar('%');
					putchar(format[i]);
					char_count += 2;
			}
		}
	}
	va_end(args); /* Clean up the va_list */

	return (char_count);
}
/**
 * main - Test for _printf function
 *
 * Return: 0 Success
 */
int main(void)
{
	int count;

	count = _printf("Hello, %c World! %s %%\n", 'C', "Custom _printf");
	printf("Character count: %d\n", count);

	return (0);
}
