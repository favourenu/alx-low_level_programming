#include <stdio.h>
/**
* main - Entry
* Return: always 0
*/
int main(void)
{
	char c = ',';
	char s = ' ';
	int n = 0;

	while (n <= 9)
	{
		putchar(48 + n);
		if (n != 9)
		{
			putchar(c);
		}

		if (n == 9)
		{
			c = '$';
			putchar(c);
		}

		putchar(s);
		n++;
	}
	return (0);
}