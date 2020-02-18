#include "holberton.h"
#include <string.h>
/**
 * *_strcpy - pointers to 98
 * @dest: array
 * @src: index
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
int i, len;
for (i = 0; src[i] != '\0'; i++)
len = i + 1;
for (i = 0; i <= len; i++)
dest[i] = src[i];
return (dest);
}
