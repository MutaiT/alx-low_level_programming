#include <stdio.h>
/**
 * main - A program that prints various sizes of computers
 * Return: 0 (Done)
 */
int main(void)
{
	long int v;
	int w;
	long long int x;
	char y;
	float z;

printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(v));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(w));
printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(x));
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(z));
return (0);
}
