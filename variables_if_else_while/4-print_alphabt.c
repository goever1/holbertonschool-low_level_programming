#include <stdio.h>
/**
 * main - Prints the alphabet exept for the q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l = 'a';

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'q' && l != 'e')
			putchar(l);
	}
	putchar('\n');
	return (0);
}
