#include "main.h"
#include <string.h>
/**
 * _strlen - prints out the lenght of a string
 * @s: the string with the lenght
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}



	return (len);
}
