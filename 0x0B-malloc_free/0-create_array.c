#include "main.h"
#include <stdlib.h>
/**
 * create_array _. create array
 * @size: size pf array
 * @c: characterr
 * Return: pointer to reserved space
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	int i;

	array = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
