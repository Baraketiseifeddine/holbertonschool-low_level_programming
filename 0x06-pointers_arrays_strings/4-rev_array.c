#include "holberton.h"
/**
 * reverse_array - pointers to 98
 * @a: array
 * @n: index
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
int i, j, temp;
i = 0;
for (j = n - 1; j >= n / 2 ; j--)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
i++;
}
}
