#include "holberton.h"
/**
 * swap_int - pointers to 98
 *
  * @a: variable
  * @b: variable
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int n = *b;
*b = *a;
*a = n;
}
