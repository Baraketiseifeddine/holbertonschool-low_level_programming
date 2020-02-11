#include "holberton.h"
/**
 * print_last_digit - use only user defined variables
 *
 * @n: is variable
 * Return: 0
**/
int print_last_digit(int n)
{
int x, z;
if (n > 0)
{
x = n % 10;
_putchar (x + '0');
return (x);
}
else
{
z = (n * (-1));
x = z % 10;
_putchar (x + '0');
return (x);
}}
