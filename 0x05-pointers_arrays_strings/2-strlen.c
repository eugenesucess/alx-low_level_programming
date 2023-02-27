#include "main.h"

/**
 * int _strlen(char *s) - check the code
 *
 * Return: integer
 */

int _strlen(char *c)
{
	size_t len = 0;
	
	while (*c++)
	{
		len++;
	}
	return len;
}
