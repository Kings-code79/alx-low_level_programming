#include <stdio.h>
/**
 * main - prints base single digit - base 10 numbers
 *
 * Return: always 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
