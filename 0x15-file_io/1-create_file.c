#include "main.h"

/**
  * create_file - creates a file
  * @filename: name of the file, if NULL, print errror
  * @text_content: contents of the file. If NULL, create an empty file
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd, len, wr_stat;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	for (len = 0; text_content[len]; len++)
		;
	wr_stat = write(fd, text_content, len);
	if (close(fd) == -1)
		return (-1);
	return (wr_stat == -1 ? -1 : 1);
}
