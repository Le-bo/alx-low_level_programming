#include "main.h"

/**
 * print_array - Prints n elements of an array integers
 * @a: Array of integers
 * @n: The number of elements of the array to be printed
 * Return: void
 */

void print_array(int *a, int n)

{

	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (n - 1))
	{
	printf(",");
	}
	}
	printf("\n");

}
