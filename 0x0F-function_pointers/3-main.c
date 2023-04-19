#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point.
 * @argc: The number of arguments.
 * @argv: The arguments passed to the function.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char **argv)
{
int a, b, result;

int (*op_func)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}
}
