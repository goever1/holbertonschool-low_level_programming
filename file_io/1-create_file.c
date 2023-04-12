#include "main.h"
/**
 * create_file - creat a file
 * @filename: name of the file to creat
 * @text_content: string to use in the file
 * Return: 1 in success, -1 when fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, aux, t_len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_TRUNC);
	if (fd == -1)
		fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (text_content)
	{
		for (t_len = 0; text_content[t_len]; t_len++)
			continue;
		aux = write(fd, text_content, t_len);
		if (aux == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
