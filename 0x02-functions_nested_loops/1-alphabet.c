#include "main.h"

/**
 * print_alphabet - print letterso 
 * Return: void
 *
 */
void print_alphabet()
{
	char start, end = 'z';

	for (start = 'a'; start <= end; start++)
	{
		_putchar(start);
	}
	_putchar('\n');
}
