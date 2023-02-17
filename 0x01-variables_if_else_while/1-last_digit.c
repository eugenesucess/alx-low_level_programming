#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - entry 
* return : 0 success
*/

int main(void)
{
  int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
         
        if( (n % 10)>5)
        {
            printf("Last digit of %d",n + "is %d",n%10 + "and is greater than 5");
        }
          else if( (n % 10) == 0)
         {
            printf("Last digit of %d",n + "is %d",n%10 + "and is 0");
         }
         else if( ((n % 10)<6) && ((n % 10) !=0 )){
          printf("Last digit of %d",n + "is %d",n%10 +"and is less than 6 and not 0");
         }
         else{
          printf("Last digit of %d",n + "is %d", n%10);
        }
	return 0;
}
