#include "main.h"

/**
* _len - gets length of a string
* @string: subject string
* Return: length of subject string
*/
int _len(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		continue;
	}
	return (i);
}

/**
* append_text_to_file - appends a file using file I/O
* @filename: name of file to be appended
* @text_content: pointer to string to be appended to file
* Return: 1 if successful or -1 if process failed
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, write_count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_RDWR);
	if (fd < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
	}
	else
	{
		len = _len(text_content);
		write_count = write(fd, text_content, len);
		if (write_count < 0 || write_count != len)
			return (-1);

		close(fd);
	}
	return (1);
}
