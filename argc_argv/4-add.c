#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds two positive numbers
 * @argc: amount of arguments
 * @argv: pointing to the arguments
 * Return: 0 when there are no numbers to add or success, 1 if error
 */
int main(int argc, char *argv[])
{
	int i = 0, r = 0;

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; ++i)
	{
		if (*argv[i] < 48 || *argv[i] > 57)
		{
			printf("Error\n");
			return (1);
		}
	}
	for (i = 1; i < argc; ++i)
	r += atoi(argv[i]);
	printf("%d\n", r);
	return (0);
}
