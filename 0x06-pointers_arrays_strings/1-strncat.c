#include "main.h"
/**
 * _strncat - concatinating two strings
 * @dest: parameter
 * @src : parameter
 * @n: parameter
 * Return: 0;
 */
char *_strncat(char *dest, char *src, char n)
{
	int e;
	int f;

	e = 0;
	while (dest[e] != '\0')
	{
		e++;
	}
	f = 0;
	while (f < n && src[f] != '\0')
	{
		dest[e] = src[f];
		e++;
		f++;
	}
	dest[e] = '\0';
	return (dest);
}
