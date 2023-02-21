#include <stdio.h>
/**
 * main - entry of program
 * return 0 (success)
 */
 
int main() {
    int i, sum = 0;
    
    for (i =0; i <1024; i++)
    {
        if( (i % 3) == 0 && (i % 5) == 0)
        {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
