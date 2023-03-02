#include "main.h"
/**
 * _strncpy - coppies a string
 * @dest: parameter
 * @src:parameter
 * @n: parameter
 * Return: dest
 */
char *_strncpy(char *dest, char *src, char n)
{
	int f;

	f = 0;
	while (f < n && src[f] != '\0')
	{
		dest[f] = src[f];
		f++;
	}
	while (f < n)
	{
		dest[f] = '\0';
		f++;
	}

	return (dest);
}
