#include "holberton.h"
/**
 * _strcmp - check the code for Holberton School students.
 * @dest: variable
 * @src: variable
 * @n: variable
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
int i, j, len1, len2;
for (i = 0; s1[i] != '\0'; i++)
len1 = i + 1;
for (j = 0; s2[j] != '\0'; j++)
len2 = j + 1;
if (s1[i] == s2[j])
{
return (len1 + len2);
}
else if (len1 < len2)
{
return (len2);
}
else
{
return (0);
}
}
