#include "holberton.h"
/**
 * _isupper - use only user defined variables
 * @c: Variable to check ascii code
 *
 * Return: 0
**/
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}

