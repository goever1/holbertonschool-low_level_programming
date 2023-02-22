#include <stdio.h>
/**
 * main - Print all base 16 numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	char l;

	for (n = 0; n <= 9; n++)
		for (l = 'a'; l <= 'f'; l++)
			putchar(n);
	putchar(l);
	putchar('\n');
	retunr (0);
}
