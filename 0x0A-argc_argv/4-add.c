#include <stdio.h>
#include <stdlib.h>
#include "ctype.h"

/**
 * main - Adds positive numbers
 *
 * @argc: Number of arguments
 * @argv: Argument vector
 *
 * Return: 1 or 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, num;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (num = 0; argv[i][num]; num++)
			{
				if (!isdigit(argv[i][num]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
