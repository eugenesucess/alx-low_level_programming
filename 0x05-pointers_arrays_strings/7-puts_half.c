#include "main.h"
#include <stdio.h>

void puts_half(char *str)
{
    int i, len, j;

    for (i = 0; str[i] != '\0'; ++i)
    {
        len =  i /2;
    }
    for (j = len; j < len + len; j++)
    {
	printf("%d",str[j]);
    }
}
