#include "main.h"

/**
* checks - checks for errors in the process
* @ret: return value of a function to help determine whether errors occured
* @error: error code to exit program with in respective cases
* @fd_value: filedes
* @file: string with name of file, it is to be printed alongside error message
*/
void checks(int ret, int error, int fd_value, char *file)
{
	if (ret < 0 && error == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(error);
	}
	if (ret < 0 && error == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(error);
	}
	if (ret < 0 && error == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_value);
		exit(error);
	}
}

/**
* main - copies contents of one file to another
* @argc: total number of arguments passed
* @argv: string array containing all arguments passed
* Return: 0
*/
int main(int argc, char **argv)
{
	int fd, fd1, read_count, write_count = 1024, close_val;
	char *buffer[1024], *file_from, *file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];
	fd = open(file_from, O_RDONLY);
	checks(fd, 98, fd, file_from);
	fd1 = open(file_to, O_CREAT | O_RDWR | O_TRUNC, 0664);
	checks(fd1, 99, fd1, file_to);
	while (write_count == 1024)
	{
		read_count = read(fd, buffer, 1024);
		checks(read_count, 98, fd, file_from);
		write_count = write(fd1, buffer, read_count);
		/*checks(write_count, 99, fd1, file_to);*/
	}
	close_val = close(fd);
	checks(close_val, 100, fd, file_from);
	close_val = close(fd1);
	checks(close_val, 100, fd1, file_to);
	return (0);
}
