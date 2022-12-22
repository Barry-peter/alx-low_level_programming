#include "main.h"

/**
 * reverse_array - a function to reverse content
 * @a: first input
 * @n: integer
 *
 * Return: a reversed input
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
