#include "holberton.h"
#include <string.h>
/**
 * _strlen - pointers to 98
 *@s : variable
 * Return: Always 0.
 */
int _strlen(char *s)
{
int i, len;
for (i = 0; s[i] != '\0'; i++)
len = i + 1;
return (len);
}
