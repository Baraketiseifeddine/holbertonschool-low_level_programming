#include "holberton.h"
/**
 * print_alphabet_x10 - use only user defined variables
 * @void: no argument
 *
**/
void print_alphabet_x10(void)
{
char j, i;
for (i = 0; i < 10; i++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar (j);
}
_putchar ('\n');
}
}
