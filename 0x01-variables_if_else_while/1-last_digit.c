#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - entry 
* return : 0 success
*/

int main(void)
{
  int n, lastn = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
        if( lastn >5)
        {
            printf("Last digit of %d is %d and is greater than 5\n", n, lastn);
        }
          else if( lastn == 0)
         {
            printf("Last digit of %d is %d and is 0\n", n , lastn);
         }
         else if(( lastn <6) && (lastn !=0 )){
          printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
        }
	return 0;
}
