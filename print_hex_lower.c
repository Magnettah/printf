#include "main.h"

/**
 * print_hex_low - returns the lowercase hexadecimal representation of an int
 * @args: argument
 *
 * Return: number of chars
 */

int print_hex_low(va_list args)
{
	int count = 0;
	int *hex_lower;
	unsigned int outcome = va_arg(args, unsigned int);
	unsigned int temp = outcome;
	int i;

	while (temp / 16 != 0)
	{
		temp = temp / 16;
		count++;
	}
	count++;
	hex_lower = malloc(sizeof(int) * count);

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
