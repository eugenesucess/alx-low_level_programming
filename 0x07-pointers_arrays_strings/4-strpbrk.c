#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -> return number of similar char
 * @s: string to find from 
 * @acccept: character to be located
 * Return: character
 */

char *_strpbrk(char *s, char *accept)
{
    char *rs;
    rs = strpbrk(s, accept);
    return (rs);
}
