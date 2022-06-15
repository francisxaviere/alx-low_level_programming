#include "main.h"
#include <stdio.h>
/**
 * reverse_array - print assay in reverse
 * @a: integer array
 * @n: integer
 */
void reverse_array(int *a, int n)
{
	int i = n - 1, j, tmp;

	for (j = 0; j < i; j++)
	{
		tmp = a[j];
		a[j] = a[i];
		a[i] = tmp;
		i--;
	}
}
