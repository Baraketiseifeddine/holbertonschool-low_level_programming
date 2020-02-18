#include "holberton.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - pointers to 98
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
   int length, c;
    char *begin, *end, temp;
    length = strlen(s);
    begin = s;
    end = s;
 
    for (c = 0; c < length - 1; c++)
        end++;
 
    for (c = 0; c < length/2; c++) { 
        temp = *end;
        *end = *begin;
        *begin = temp;
 
        begin++;
        end--; 
}}
