#include "main.h"

/**
 * _isalpha - A program that checks for alphabetical character
 *
 * @c : Ascertain the state of a letter
 * Return: 1 or 0
 */
int _isalpha(int c);
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
