#include "holberton.h"
/**
 * _islower- use only user defined variables
 * @c: var input
 * Return: 0
**/
int _islower(int c)
{
if (c <= 'z' && c >= 'a')
{
return (1);
}
else
return (0);
}
