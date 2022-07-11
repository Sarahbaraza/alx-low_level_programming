#include "main.h"
#include <stdlib.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: pointer
 * @n: number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	short c = 0;

	while (n-- > 0)
	{
		printf("%d", a[c++]);
		if (n != 0)
			printf(", ");
	}

	printf("\n");
}
