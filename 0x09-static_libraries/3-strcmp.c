#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: parameter
 * @s2: parameter
 * Return: both parameter
 */
int _strcmp(char *s1, char *s2)
{
	int e;

	e = 0;

	while (s1[e] != '\0' && s2[e] != '\0')
	{
		if (s1[e] != s2[e])
		{
			return (s1[e] - s2[e]);
		}
		e++;
	}
	return (0);
}
