#include <stdio.h>
/**
* main - Entry
* Return: always 0
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if ((c != 'q' && c != 'e') && c <= 'z')
			putchar(c);
		c++;
	}
		putchar('\n');
		return (0);
}
