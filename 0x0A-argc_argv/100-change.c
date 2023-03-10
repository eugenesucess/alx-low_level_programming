#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
/*	int coins=0; */

		printf("%s\n", argv[2]);

	if (argc < 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
/*
	
	while (cents > 0)
	{
		coins++;

		if (cents - 25 >= 0)
		{
			cents = cents - 25;
			continue;
		}
		if (cents - 10 >= 0)
		{
			cents = cents - 10;
			continue;
		}
		if (cents - 5 >= 0)
		{
			cents =  cents - 5;
			continue;
		}
		if (cents - 2 >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);
*/
	return (0);
}
