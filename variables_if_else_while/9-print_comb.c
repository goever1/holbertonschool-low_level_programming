#include <stdio.h>
/**
 * main - prints all combinatios of single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n + '0'));
	if (n < '7')
		putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
