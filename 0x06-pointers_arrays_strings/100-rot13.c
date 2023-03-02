#include "main.h"
/**
 * rot13 - encode a string
 * @s: parameter
 * Return: s
 */
char *rot13(char *s)
{
	int e;
	int f;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (e = 0; s[e] != '\0'; e++)
	{
		for (f = 0; f < 52; f++)
		{
			if (s[e] == data1[f])
			{
				s[e] = datarot[f];
				break;
			}
		}
	}
	return (s);
}
