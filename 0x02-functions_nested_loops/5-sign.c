#include "main.h"
/**
 * print_sign - prins the sign of a number
 * @n: number in question
 *
 * Return: return 1,0 and -1
 *	for positve zero and negtive numbers respectively
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
