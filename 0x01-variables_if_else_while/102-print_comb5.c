#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * return: 0 success
 */
int main(void) /* main function*/
{

int d,p,q;
for(d = '0'; d< '9'; d++)
{
    for (p = d + 1; p <= '9'; p++)
    {
        putchar((d / 10)+ '0');
        putchar((p % 10)+ '0');
        putchar(' ');
        putchar((q / 10)+ '0');
        putchar((q % 10)+ '0');
        if(d == 98 && p == 99)
        continue;
        putchar(',');
        putchar(' ');
    
    }
}
return (0);
}
