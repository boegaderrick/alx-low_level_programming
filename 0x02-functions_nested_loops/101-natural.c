#include <stdio.h>

/***/

int main(void)
{
	int n = 1;
	int sum;

	while (n < 1024)
	{
		if ((n % 3 == 0) || (n / 5 == 0))
		{
			sum = sum + n;
		}
		else
		{
			continue;
		}
		n++;
	}
	return (sum);
}
