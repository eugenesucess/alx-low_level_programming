#include "main.h"

/**
 * _strdup -> duplicate string
 * @str: string to be duplicated
 * Return: char
 */

char *_strdup(char *str)
{
	int size = 0;
	char *ptr, *rs;

	if (str == NULL)
	{
		return (NULL);
	}
	rs = str;

	rs = malloc(size + 1);
	return (rs);
}
