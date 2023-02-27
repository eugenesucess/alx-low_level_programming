#include "main.h"

/**
 * void _puts : prints string
 * return : void
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
