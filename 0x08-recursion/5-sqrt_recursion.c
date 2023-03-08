#include "main.h"

/**
 * checkSqrt - checks for the square root
 * @i:guess at sqrt
 * @num: number to find sqrt of
 * @n: input
 * Return: integer
 */

int checkSqrt(int num, int i)
{
    int sqroot = i * i;
    
    if (sqroot > num)
    {
        return (-1);
    }
    if (sqroot == num)
    {
        return (i);
    }
    return (checkSqrt(num, i + 1));
}
int _sqrt_recursion(int n)
{
    return (checkSqrt(n, 1));
}
