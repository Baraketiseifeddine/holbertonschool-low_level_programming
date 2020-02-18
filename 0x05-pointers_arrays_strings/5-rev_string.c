#include "holberton.h"
#include <string.h>
/**
 * rev_string - pointers to 98
 * @s: chaine
 * Return: Always 0.
 */
void rev_string(char *s)
{
int i, j = 0, len = 0, k = 0, a;
for (i = 0; s[i] != '\0'; i++)
len = i + 1;
for (j = len - 1; j >= len / 2 ; j--)
{
a = s[k];
s[k] = s[j];
s[j] = a;
k++;
}
}
