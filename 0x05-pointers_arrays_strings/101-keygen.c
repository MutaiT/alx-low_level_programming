#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that generates random valid passwords
 *
 * Return: 0 Everytime
 *
 */
int main(void)
{
	int x = 0, y = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (y < 2772)
	{
		x = rand() % 128;
		if ((y + x) > 2772)
			break;
		x = x + y;
		printf("%x", y);
	}
	printf("%c\n", (2772 - x));
	return (0);
}
