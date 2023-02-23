#include "main.h"
/**
 * print_last_digit - Prints the last digit of a given number in betty style.
 * @num: The number whose last digit is to be printed.
 * Return: The value of the last digit.
 */
int print_last_digit(int num)
{
	int last_digit;

	if (num < 0) /* Handle negative numbers */
		num = -num;
	last_digit = num % 10;
	_putchar(last_digit + '0'); /* Print the last digit */
	_putchar('\n'); /* Print a newline character */
	return (last_digit);
}
