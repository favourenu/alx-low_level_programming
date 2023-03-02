#include <stdio.h>
/**
 * main - entry
 *
 * add one line to this code
 * print a[2] = 98, folowed by a new line.
 * Return: always 0
 */
int main(void)
{
	int a[] = {4, 8, 98};
	int* p = &a[0];

	printf("a[2] = %d\n", *(p + 2)); // Add this line
	return 0;
}
