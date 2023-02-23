#include "main.h"

/**
 * more_numbers - more numbers
 * return: void
 */

void more_numbers(void)
{
	int i, j = 0, k = 14;

	for (i = 1; i < 10; i++)
	{
		while (j <= k)
		{
			_putchar(j > 9 ? (j / 10) + '0' : j + '0');
			if (j > 9)
			{
				_putchar((j % 10) + '0');
			}
			j++;
		}
		j = 0;
		_putchar('\n');
	}
}
