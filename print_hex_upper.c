#include "main.h"

/**
 * print_hex_upper - returns the uppercase hexadecimal representation of an int
 * @args: argument
 *
 * Return: number of chars
 */

int print_hex_upper(va_list args)
{
	int count = 0;
	int *hex_upper;
	unsigned int outcome = va_arg(args, unsigned int);
	unsigned int temp = outcome;
	int i;

	while (temp / 16 != 0)
	{
		temp /= 16;
		count++;
	}
	count++;
	hex_upper = malloc(sizeof(int) * count);

	for (i = 0; i < count; i++)
	{
		hex_upper[i] = outcome % 16;
		outcome /= 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (hex_upper[i] < 10)
		{
			_putchar('0' + hex_upper[i]);
		}
		else
		{
			_putchar('A' + (hex_upper[i] - 10));
		}
	}

	free(hex_upper);
	return (count);
}
