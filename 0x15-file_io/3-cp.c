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
	char *buffer;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	buffer = malloc(sizeof(char) * 1024);
	read_count = read(fd, buffer, 1024);

	fd1 = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fd1 < 0)
	{
		dprintf(2, "Error: Cant't write to %s\n", argv[2]);
		exit(99);
	}
	write(fd1, buffer, read_count);
	close_val = close(fd);
	if (close_val < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	close_val = close(fd1);
	if (close_val < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	free(buffer);
	return (0);
}
