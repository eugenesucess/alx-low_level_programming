#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * return: 0 success
 */
int main(void) /* main function*/
{
    int i,j;
    for (i ='0';  i<= '9'; i++)
    {
        for (j = i+1; i<= '9'; j++)
        {
            if(j != i)
            {
                putchar(i);
                putchar(j);
                if(j == '8' && j == '9')
                continue;
                putchar(',');
                putchar(' ');
            }
        }
    }
return (0);
}
