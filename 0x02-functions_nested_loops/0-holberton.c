#include "holberton.h"
/**
 * main - entry block
 * @void: no argument
 * Return: 0 (Sucess)
**/
int main(void)
{
char ch[] = "Holberton";
int i = 0;
while (ch[i] != '\0')
{_putchar (ch[i]);
i++;
}
_putchar ('\n');
return (0);
}
