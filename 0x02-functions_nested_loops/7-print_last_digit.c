#include "holberton.h"
/**
 * print_last_digit - use only user defined variables
 *
 * @n: is variable
 * Return: 0
**/
int print_last_digit(int n)
{
int x;
if (n >= 0)
{
x = n % 10;
_putchar (x + '0');
return (x);
}
else
{
n = (n * (-1));
x = n % 10;
_putchar (x + '0');
return (x);
}}
