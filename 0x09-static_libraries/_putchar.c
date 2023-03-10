#include "main.h"
#include <unistd.h>
/**
* _putchar - Entry
* @c: the character to be returned
* Return: character to print
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
