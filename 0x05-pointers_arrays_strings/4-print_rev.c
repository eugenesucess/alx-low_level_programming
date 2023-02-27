#include "main.h"
/**
 * void print_rev : print_rev
 * return:void
 */

void print_rev(char *s)
{
	int long = 0;
	
	while (s[long] != '\0')
	{
		long++;
	}
	for ( long = long -1; long >= 0; long--)
	{
		_putchar(s[long];
	}
}
