#include "main.h"
/**
 * string_toupper - changing lowercase strings to uppercase strings
 * @n: parameter
 * Return: 0
 */
char *string_toupper(char *n)
{
	int e;

	e = 0;

	while (n[e] != '\0')
	{
		if (n[e] >= 'a' && n[e] <= 'z')
			n[e] = n[e] - 32;
		e++;
	}
	return (n);
}
