#include "main.h"

/**
* main - copies contents of one file to another
* @argc: total number of arguments passed
* @argv: string array containing all arguments passed
* Return: 0
*/
int main(int argc, char **argv)
{
	int fd, fd1, read_count, close_val;
	char *buffer[1024], *file_from, *file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	fd = open(file_from, O_RDONLY);
	read_count = read(fd, buffer, 1024);
	if (fd < 0 || read_count < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	file_to = argv[2];
	fd1 = open(file_to, O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	write(fd1, buffer, read_count);
	close_val = close(fd);
	if (close_val < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	close_val = close(fd1);
	if (close_val < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	return (0);
}
