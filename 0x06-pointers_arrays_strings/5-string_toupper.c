#include "holberton.h"
/**
 * *string_toupper - check the code for Holberton School students.
 * @s1: variable
 * Return: Always 0.
 */
char *string_toupper(char *s1)
{
int i = 0, j;
j = 0;
for (i = 0; s1[i] != '\0'; i++)
{
if (s1[i] >= 97 && s1[i] <= 122)
{
s1[i] = s1[i] - 32;
j++;
}
else
{
j++;
}
}
return (s1);
}
