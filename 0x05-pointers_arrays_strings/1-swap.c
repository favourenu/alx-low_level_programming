#include "main.h"
/**
 * swap_int - swap the value of two integers
 * @a: int to swap
 * @b: int to swap
 */
void swap_int(int *a, int *b)
{
	int m = *a;

	*a = *b;
	*b = *m;
}
