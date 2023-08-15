#include "main.h"

/**
 * islower - A program that checks for lowercase character
 * @c : check the case character
 * Return: 0 for otherwise, 1 for lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else 
		return (0);
}
