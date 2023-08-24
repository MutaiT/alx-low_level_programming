#include "main.h"

/**
 *cap_string - A function that capitalises all  words of a string
 *
 *@seq: String to be modified
 *
 *Return: Modified string
 */
char *cap_string(char *seq)
{
	int x, prec;

	for (x = 0; seq[x] != '\0'; x++)
	{
		prec = x - 1;
		if (seq[x] >= 'a' && seq[x] <= 'z')
		{
			if (x == 0)
			{
				seq[x] = seq[x] - 32;
			}
			else if (seq[prec] == ' ' || seq[prec] == '\t')
			{
				seq[x] = seq[x] - 32;
			}
			else if (seq[prec] == '\n' || seq[prec] == ',')
			{
				seq[x] = seq[x] - 32;
			}
			else if (seq[prec] == ';' || seq[prec] == '.')
			{
				seq[x] = seq[x] - 32;
			}
			else if (seq[prec] == '!' || seq[prec] == '?')
			{
				seq[x] = seq[x] - 32;
			}
			else if (seq[prec] == '"' || seq[prec] == '(')
			{
				seq[x] = seq[x] - 32;
			}
			else if (seq[prec] == ')' || seq[prec] == '{' || seq[prec] == '}')
			{
				seq[x] = seq[x] - 32;
			}
		}
	}
	return (seq);
}
