#include <stdio.h>
#include <stdlib.h>
/**
* main - entry block
* @void: no argument
* Return: 0 (Sucess)
**/
int main(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
if (i != 'e' && i != 'q')
putchar (i);
}
putchar ('\n');
return (0);
}
