#include <stdio.h>
#include <math.h>

/***/

int main(void)
{
	int n = 1;
	int sum = 0;

	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum += n;
		}
		else
		{
			continue;
		}
		n++;
	}
	printf("%d", sum);
	return (0);
}
