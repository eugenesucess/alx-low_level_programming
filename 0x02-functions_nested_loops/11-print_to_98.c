#include "main.h"
#include <stdio.h>

/**
 * void print_to_98 - print natural number
 * return : void
 *
 */

void print_to_98(int n)
	{
		int i=0;
		if(n>98)
		{
			for ( i = n; i>=98; i--)
			{
			printf("%d, ", i);
			}
        	}

        for ( i = n; i<= 98; i++)
        {
		printf("%d, ", i);
        }
        printf("\n");
    }
