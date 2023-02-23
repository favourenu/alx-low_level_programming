#include "main.h"
/**
 * print_last_digit - Prints the last digit of a given number in betty style.
 * @n: The number whose last digit is to be printed.
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
<<<<<<< HEAD
   	int a;	

	if (n < 0)
		n = -n;

	a = n % 10;
		
	if (a < 0)
		a = -a;
	
	_putchar(a + '0');
	
	return (a);
=======
		int a;

		if (n < 0)
			n = -n;
		a = n % 10;
		if (a < 0)
			a = -a;
		_putchar(a + '0');
		return (a);
>>>>>>> 8bfc8dab566b6a183e8977560985404ac72350d3

}
