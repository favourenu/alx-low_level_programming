#include "main.h"
/**
 * _strcat - concatinate two strings
 * @dest: parameter
 * @src: parameter
 * Return:  0
 */
char *_strcat(char *dest, char *src)
{
	int e;
	int f;

	e = 0;
	while (dest[e] != '\0')
	{
		e++;
	}
	f = 0;
	while (src[f] != '\0')
	{
		dest[e] = src[f];
		e++;
		f++;
	}

	dest[i] = '\0';
	return (dest);
}
