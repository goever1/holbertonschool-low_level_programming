#include <stdio.h>
/**
 * main - It counts the amount of arguments in the program
 * @argc: integer thet represents the amount of arguments
 * @argv: an array of strings containing the command line arguments
 * Return: 0 when success
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i = 0;

	for (; i < argc ; ++i)
	{
	}
	printf("%d\n", i - 1);
	return (0);
}
