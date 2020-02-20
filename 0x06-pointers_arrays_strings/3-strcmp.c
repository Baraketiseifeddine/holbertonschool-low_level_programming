#include "holberton.h"
/**
 * _strcmp - check the code for Holberton School students.
 * @s1: variable
 * @s2: variable
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
int i, j, res;
j = 0;
for (i = 0; s1[i] != '\0'; i++)
{
if (s1[i] == s2[j])
{
res = s1[i] - s2[j];
j++;
}
else
{
res = s1[i] - s2[j];
return (res);
}
}
return (res);
}
