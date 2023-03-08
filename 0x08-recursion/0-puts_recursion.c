#include "main.h"

/**
 * _puts_recursion -> print string on the screen
 * @s: string to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s <= '\0')
		_putchar('\n');
	_putchar(*s);
	_puts_recursion(s + 1);
}
