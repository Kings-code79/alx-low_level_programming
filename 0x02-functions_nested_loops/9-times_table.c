#include "main.h"
/**
 * times_table - prints the nine times table
 */

void times_table(void)
{
	int num, num2, num3;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (num2 = 1; num2 <= 9; num2++)
		{
			_putchar(',');
			_putchar(' ');

			num3 = num * num2;

			if (num3 <= 9)
				_putchar(' ');
			else
				_putchar((num3 / 10) + '0');

			_putchar((num3 % 10) + '0');
		}
		_putchar('\n');
	}
}
