#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) /* main function*/
{
	char a;
	
	for (a = 'a'; a <= 'z'; a++)
	{
		if ( a == 'e' || a == 'q')
	    		continue;
	putchar(a);
	}
	putchar('\n');

	return (0);
}
