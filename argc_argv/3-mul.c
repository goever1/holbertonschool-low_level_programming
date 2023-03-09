#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: variable not used
 * @argv: points two the numbers
 * Return: 0 when succes, 1 when error
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int n1 = 0, n2 = 0, r = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	r = n1 * n2;
	printf("%d\n", r);
	return (0);
}
