#include <stdio.h>
/**
 * main - Prints the alphabet exept for the q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		if (l != 'q' || l != 'e')
			l++;
		else
			putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
