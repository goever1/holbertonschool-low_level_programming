#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: amaount of arguments in the program
 * @argv: point to the arguments
 * Return: 0
 */
int main (int argc, char *argv[])
{
	int n1, n2;
	char *op;

	if (argc != 4 )
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	op = argv[2];
	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && n2 == '0')
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(n1, n2));
	return(0);
}
