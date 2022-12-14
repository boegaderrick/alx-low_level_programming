#include "main.h"

/**
* read_textfile - reads a file and prints contents to stdout
* @filename: file to be read
* @letters: number of characters to be read printed
* Return: total chars printed or 0 if error/s occured
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t read_count, write_count;

	if (filename == NULL || letters < 1)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	read_count = read(fd, buffer, letters);
	close(fd);
	if (read_count < 0)
	{
		free(buffer);
		return (0);
	}
	write_count = write(STDOUT_FILENO, buffer, read_count);
	free(buffer);
	if (write_count < 0 || write_count != read_count)
		return (0);
	return (write_count);
}
