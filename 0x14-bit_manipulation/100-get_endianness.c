#include "main.h"

/**
* get_endianness - checks if cpu is little or big endian
* Return: 1 if little, 0 if big
*/
int get_endianness(void)
{
	int num = 1;
	char *ptr = (char *)&num;

	if (*ptr == 1)
		return (1);
	else
		return (0);
}
