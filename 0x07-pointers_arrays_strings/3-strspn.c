#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn -> return number of similar char
 * @s: string to find from 
 * @acccept: character to be located
 * Return: integer
 */

unsigned int _strspn(char *s, char *accept)
{
    int *rs;
    rs = strspn(s,accept);
    return (rs);
}
