#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 * @argc: NUMB des arguments
 * @argv: tableau des arguements
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
int i, result;
for (i = 0; i < argc; i++)
;
if (i == 3)
{
result = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", result);
return (0);
}
else
{
printf("Error\n");
return (1);
}

}
