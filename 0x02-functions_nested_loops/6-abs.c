#include "holberton.h"
/**
 * _abs - use only user defined variables
 * @n: is variable
 * Return: 0
**/
int _abs(int n)
{
if (n < 0)
{
n = n *(-1);
return (n);
}
else
return (n);
}
