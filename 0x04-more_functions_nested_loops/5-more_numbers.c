#include "holberton.h"
/**
 * more_numbers - use only user defined variables
 *
 *
 * Return: 0
**/
void more_numbers(void)
{
int i, j, m, d;

for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
d = j / 10;
m = j % 10;
if ( j > 9)
_putchar (d + '0');
_putchar (m + '0');
}
_putchar ('\n');
}
}
