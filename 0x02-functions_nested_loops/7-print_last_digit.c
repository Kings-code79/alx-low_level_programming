#include "main.h"
/**
 * print_last_digit - it shows the last numbere of an integer
 * @n: integer in question
 *
 * Return: The last value
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');

	return (last_digit);
}
