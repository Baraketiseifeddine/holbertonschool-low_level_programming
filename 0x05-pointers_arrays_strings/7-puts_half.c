#include "holberton.h"
#include <string.h>
/**
 * puts_half - pointers to 98
 * @str: chaine
 * Return: Always 0.
 */
void puts_half(char *str)
{
int i, n, len;
for (i = 0; str[i] != '\0'; i++)
len = i + 1;
for (n = (len - 1) / 2; str[n] != '\0'; n++)
{
_putchar (str[n+1]);
}
_putchar ('\n');
}
