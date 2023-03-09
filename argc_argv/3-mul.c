#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: variable not used
 * @argv: points two the numbers
 * Return: 0 when succes, 1 when error
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int n1 = *argv[1], n2 = *argv[2], r = 0;
	r = n1 * n2;
	if (n1 == '\0' && n2 == '\0')
	{
		printf("%s\n", "Error");
		return (1);
	}
	printf("%d\n", r);
	return (0);
}
