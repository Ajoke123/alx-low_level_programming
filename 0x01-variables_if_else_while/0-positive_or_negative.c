#include <stdio.h>
/**
 * main - main entry
 *
 * return: always (0) (success)
 */
int main()
{
	int n;
	
	strand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("%i is zero\n", n);
	}

	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}

	else if (n > 0)
	{
		printf("%i is positive\n", n);
	}

	return (0)
}
