#include <stdio.h>
/**
* main - Entry
* Return: always 0
*/
int main(void)
{
	char c = 'a';
	int n = 0;

	while (n <= 9)
	{
		putchar(48 + n);
		n++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
