#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 *main - entry
 *Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int ld = n % 10
if (ld > 5)
{
printf("The last digit of %d is %d and is greater than 5", n, ld);
}
else if (ld == 0)
{
printf("The last digit of %d is %d and is 0", n, ld);
}
else
{
printf("The last digit of %d is %d and is less than 6 and not 0", n, ld);
}

return (0);
}
