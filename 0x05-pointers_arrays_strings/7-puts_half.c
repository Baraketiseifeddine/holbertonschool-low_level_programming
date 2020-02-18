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
if (len % 2 != 0)
for (n = ((len - 1) / 2) + 1; str[n] != '\0'; n++)
{
_putchar (str[n]);
}
else
{
for (n = len / 2; str[n] != '\0'; n++)
{
_putchar (str[n]);
}
}
_putchar ('\n');
}
