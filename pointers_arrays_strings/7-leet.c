#include "main.h"
char *leet(char *str)
{
	char *cod = "4BCD3F6H1JKLMN0PQR57UVWXY2";
	int i = 0, j = 0;

	for (; str[i] != '\0'; ++i)
	{
		for (; j < 26; ++j)
		{
			if (str[i] == 'a' + j || str[i] == 'A' + j)
				str[i] = cod[j];
		}
	}
	str[i] = '\0';
	return (str);
}			
