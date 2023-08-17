#include "main.h"

/**
 * _isupper - A function that checks for uppercase character
 *
 *@c: Prints number
 * Return: 0 Great
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
