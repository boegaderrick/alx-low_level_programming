/**
* int_index - searches for specified integer
* @array: array of integers
* @size: size of array
* @cmp: callback function to aid in search
* Return: index of integer, -1 if not found or error encountered
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		j = cmp(array[i]);
		if (j != 0)
		{
			break;
		}
	}
	if (j == 0)
	{
		return (-1);
	}
	return (i);
}
