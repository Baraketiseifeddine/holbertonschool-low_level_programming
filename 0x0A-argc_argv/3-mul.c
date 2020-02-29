#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 * @argc: NUMB des arguments
 * @argv; tableau des arguements
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
int i, result;
for (i=0; i < argc; i++)
if (i <= 2)
{
result = argv[1] * argv[2];
printf ("%d\n", result);
}
else
{
 printf (Error, "\n");
}

}
