#include <stdio.h>
/**
 * main - prints hexadecimals of numbers 0 -9
 *
 * Return: always 0
 */
int main(void)
{
	int num;
	char i;

	for (num = 0; num <= 9; num++)
		putchar((num % 10) + '0');

	for (i = 'a'; i <= 'f'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
