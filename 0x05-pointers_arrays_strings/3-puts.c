#include "holberton.h"
#include <string.h>
#include <stdio.h>
/**
 * _puts - pointers to 98
 * @str : chaine
 * Return: Always 0.
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
_putchar (str[i]);
_putchar ('\n');
}
