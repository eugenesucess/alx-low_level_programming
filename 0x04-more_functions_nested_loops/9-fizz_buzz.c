#include <stdio.h>

/**
 * main - entry
 * return: 0 (success)
 *
 */

int main(void)
{
	int start;

	for (start = 1; start <= 100; start++)
	{
		if (start % 3 == 0 && start % 5 == 0)
		{
			printf("FizzBuzz");
		}
		if (start % 3 == 0)
		{
			printf("Fizz");
		}
		if (start % 5 == 0)
		{
			printf("Buzz");
		}
		prinft("%d ", start);
		printf(" ");
	}
	return (0);
}
