#include <stdio.h>
/**
* main - Entry
* Return: always 0
*/
int main(void)
{
	char c = 'a';

	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
