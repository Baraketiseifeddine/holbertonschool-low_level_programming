#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry block
 * @void: no argument
 * Return: 0 (Sucess)
**/
int main(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
putchar (i + '0');
putchar (j + '0');
if (i != 9 || j != 9)
{
putchar (',');
putchar (' ');
}
}
}
putchar ('\n');
return (0);
}
