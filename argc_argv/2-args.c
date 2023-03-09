#include <stdio.h>
/**
 * main - Prints the arguments in the program
 * @argc: number of arguments
 * @argv: pointer to the arguments
 * Return: 0 when success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; ++i)
		printf("%s\n", argv[i]);
	return (0);
}
