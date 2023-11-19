#include "main.h"

/**
 * print_hex - converts to hexadecimal
 * @args: argument
 *
 * Return: number of chars
 */

int print_hex(unsigned long int outcome)
{
	long int i, count = 0;
	long int *hex_lower;
	unsigned int long temp = outcome;

	while (temp / 16 != 0)
	{
		temp = temp / 16;
		count++;
	}
	count++;
	hex_lower = malloc(sizeof(long int) * count);

	for (i = 0; i < count; i++)
	{
		hex_lower[i] = outcome % 16;
		outcome = outcome / 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (hex_lower[i] < 10)
		{
			_putchar ('0' + hex_lower[i]);
		}
		else
		{
			_putchar('a' + (hex_lower[i] - 10));
		}
	}

	free(hex_lower);
	return (count);
}
