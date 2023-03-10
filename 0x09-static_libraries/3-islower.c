#include "main.h"
/**
 * _islower - checks for lowercase.
 * @c: just a charac
 * Return: it depends, it could be 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
