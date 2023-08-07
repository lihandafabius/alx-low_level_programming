#include "main.h"

/**
  * read_textfile - reads a text file and prints it to the POSIX standard out
  * @filename: name of the file to read
  * @letters: number of characters to print
  * Return: 0 on success
  **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor, total_status, read_filestatus;
	char buffer[BUFSIZE];

	if (filename == NULL)
		return (0);
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	total_status = 0;
	read_filestatus = 1;
	while (letters > BUFSIZE && read_filestatus != 0)
	{
		read_filestatus = read(file_descriptor, buffer, BUFSIZE);
		write(STDOUT_FILENO, buffer, read_filestatus);
		total_status += read_filestatus;
		letters -= BUFSIZE;
	}
	read_filestatus = read(file_descriptor, buffer, letters);
	write(STDOUT_FILENO, buffer, read_filestatus);
	total_status += read_filestatus;
	close(file_descriptor);
	return (total_status);
}
