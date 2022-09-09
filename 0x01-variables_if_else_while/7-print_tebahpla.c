#include <stdio.h>
/**
 * main - function reverse the letters of the alphabert
 *
 * Return: aleways 0
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);

	putchar('\n');

	return (0);
}
