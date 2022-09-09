#include <stdio.h>
/**
 * main - prints all base 10 numbers thatare single digit
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
