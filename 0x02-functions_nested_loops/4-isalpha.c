#include "main.h"

/**
 * _isalpha : check if there is no symbol
 *  return : 1 if ok 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 65) && (c <= 122))
	{
		return (1);
	}
	return (0);
}
