#include "main.h"
/**
 * _isalpha - just to check for alphabets
 * @c: just the parameter of the above function
 * Return: 0 or void
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
