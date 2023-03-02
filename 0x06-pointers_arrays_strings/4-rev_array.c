#include "main.h"
/**
 * reverse_array - reverse the content of an array of integer.
 * @a: parameter
 * @n: parameter
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int e;
	int f;

	for (e = 0; e < n--; e++)
	{
		f = a[e];
		a[e] = a[n];
		a[n] = f;
	}
}	
