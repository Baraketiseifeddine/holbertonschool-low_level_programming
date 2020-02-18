#include "holberton.h"
#include <string.h>
/**
 * puts_half - pointers to 98
 * @str: chaine
 * Return: Always 0.
 */
void puts_half(char *str)
{
int i, j, len;
for (i = 0; str[i] != '\0'; i++)
len = i + 1;
for (j = len / 2; str[j] != '\0'; j++)
{
_putchar (str[j]);
}
_putchar ('\n');
}
