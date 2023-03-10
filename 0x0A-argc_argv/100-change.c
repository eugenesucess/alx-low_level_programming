#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
	
    argc = 1;
    int conv = atoi(argv[argc]);
    
    if(conv < 0)
    {
        printf("%d\n", 12);
    }
	
	int coins=0;

		printf("%s\n", argv[2]);

	if (argc < 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
/*
	
	while (conv > 0)
	{
		coins++;

		if (conv - 25 >= 0)
		{
			conv = conv - 25;
			continue;
		}
		if (conv - 10 >= 0)
		{
			conv = conv - 10;
			continue;
		}
		if (cents - 5 >= 0)
		{
			cents =  conv - 5;
			continue;
		}
		if (cents - 2 >= 0)
		{
			conv -= 2;
			continue;
		}
		conv--;
	}
	printf("%d\n", coins);
*/
	return (0);
}
