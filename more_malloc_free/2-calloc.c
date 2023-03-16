#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates the memory for nmemb
 * @nmemb - input of array
 * @size - input of the size for memory
 * Return: null when fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	 int i = 0;
	 char *po;
	 
	 po = malloc(nmemb * size)
	 if(nmemb == 0 || size = 0)
		 return (NULL);
	 if (po == NULL)
		 return (NULL);
	 memset (po, 0, nmemb * size);
	 return (po);
}
