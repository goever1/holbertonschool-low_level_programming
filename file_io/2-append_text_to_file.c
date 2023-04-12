#include "main.h"
/**
 * append_text_to_file - appends txt at the end of the file
 * @filename: file to creat
 * @text_content: string to write to the file
 * Return: 1 in success, -1 when fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, aux, t_len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1 || (text_content == NULL && fd == -1))
		return (-1);
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
