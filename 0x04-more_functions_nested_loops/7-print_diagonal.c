#include "holberton.h"
/**
 * print_diagonal - use only user defined variables
 * @n: variable
 *
 * Return: 0
**/
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
_putchar ('\n');
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
if (i != 0)
_putchar (' ');
}
_putchar ('\\');
_putchar ('\n');
}}
