#include "main.h"
#include <ctype.h>

/**
 * _isupper - function that checks for alphabetic character
 *
 * @c: return char type
 *
 * Return: return 0 on succee ans 1 on fail
 */

int _isupper(int c)
{
	int i = isupport(c);

	if (i > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
