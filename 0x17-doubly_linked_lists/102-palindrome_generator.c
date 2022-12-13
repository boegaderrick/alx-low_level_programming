#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
* strrev - reverses string
* @s: pointer to string to be reversed
*/
void strrev(char *s)
{
	char temp;
	int i, len = strlen(s), j = len / 2;

	len--;
	for (i = 0; i < j; i++)
	{
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;
		len--;
	}
}

/**
* palindrome - checks if string is a palindrome
* @s: pointer to string to be checked
* Return: 0 if string is a palindrome, other number if otherwise
*/
int palindrome(char *s)
{
	int i;
	char *ptr = strdup(s);

	strrev(ptr);
	i = strcmp(s, ptr);
	return (i);
}

/**
* main - program entry point
* Return: 0
*/
int main(void)
{
	int i, j, result, low = 99, valid = 0, fd;
	char s[10];

	for (i = 999; i > low; i--)
	{
		for (j = 999; j > low; j--)
		{
			result = i * j;
			snprintf(s, 10, "%d", result);
			if (palindrome(s) == 0)
			{
				if (result > valid)
					valid = result;
			}
		}
	}
	snprintf(s, 10, "%d", valid);
	fd = open("./102-result", O_CREAT | O_RDWR, 444);
	write(fd, s, strlen(s));
	return (0);
}
