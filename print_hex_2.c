#include "main.h"

/**
 * print_hex_2 - returns hexadecimal
 * @outcome: argument
 * Return: number of chars
 */

int print_hex_2(unsigned long int outcome)
{
	int i;
	long int count = 0;
	unsigned long int temp = outcome;

	while (temp / 16 != 0)
	{
		temp = temp / 16;
		count++;
	}
	count++;

	for (i = count - 1; i >= 0; i--)
	{
		int remainder = outcome % 16;

		outcome = outcome / 16;

		if (remainder > 9)
			_putchar(remainder - 10 + 'a');
		else
			_putchar(remainder + '0');
	}

	return (count);
}
