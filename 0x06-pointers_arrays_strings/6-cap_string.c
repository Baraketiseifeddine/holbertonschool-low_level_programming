#include "holberton.h"
/**
 * *cap_string - check the code for Holberton School students.
 * @s1: variable
 * Return: Always 0.
 */
char *cap_string(char *s1)
{
int c[14] = {32, 9, 10, 46, 44, 59, 63, 33, 34, 40, 41, 123, 125};
int i = 0, k;
for (i = 0; s1[i] != '\0'; i++)
{
//if (s1[0] >= 97 && s1[0] <= 122)
//{s1[0] = s1[0] - 32;}
for (k = 0; k < 11; k++)
if (s1[i] >= 97 && s1[i] <= 122 && s1[i - 1] == c[k])
s1[i] = s1[i] - 32;
}
return (s1);
}
