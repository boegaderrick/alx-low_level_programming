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
	ssize_t count;

	if (filename == NULL || letters < 1)
		return (0);

	fd = open(filename, O_RDONLY);
	if (!fd)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	count = read(fd, buffer, letters);
	if (!count)
		return (0);
	count = write(1, buffer, count);
	if (!count)
		return (0);

	close(fd);
	free(buffer);
	return (count);
}
