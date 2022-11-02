#include "main.h"

/**
* _strlen - gets length of a string
* @string: subject string
* Return: length of subject string
*/
int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		continue;
	}
	return (i);
}

/**
* create_file - creates a file using file I/O
* @filename: name of file to be created
* @text_content: pointer to string to be written to created file
* Return: 1 if successful or -1 if process failed
*/
int create_file(const char *filename, char *text_content)
{
	int fd, len, write_count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
	}
	else
	{
		len = _strlen(text_content);
		write_count = write(fd, text_content, len);
		if (write_count < 0 || write_count != len)
			return (-1);

		close(fd);
	}
	return (1);
}
