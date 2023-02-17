#include<stdlib.h>
#include<stdio.h>
#include<time.h>
/**
 * main - entry point of program
 * Return: 0 (success)
 * betty style doc for function main goes there
 */

int main(void)
{
	  int n;
    	n=rand();
	if(n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if(n == 0)
	{
		printf("%d is zero\n", n);
	}
	else{
		printf("%d is negative\n", n);
	}
	return (0);
}
