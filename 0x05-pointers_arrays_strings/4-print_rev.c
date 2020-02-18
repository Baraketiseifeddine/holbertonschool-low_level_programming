#include "holberton.h"
#include <string.h>
/**
 * print_rev - pointers to 98
 * @s: chaine
 * Return: Always 0.
 */
void print_rev(char *s)
{

int i, j = 0, len = 0;
for (i = 0; s[i] != '\0'; i++)
len = i + 1;
for (j = len - 1; j >= 0 ; j--)
_putchar (s[j]);
_putchar ('\n');
}
