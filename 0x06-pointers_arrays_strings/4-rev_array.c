#include "main.h"

/**
 *reverse_array - A function that reverses the content of an array in integers
 *
 *@a: The array to be reversed
 *
 *@n: The number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int temp;
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
