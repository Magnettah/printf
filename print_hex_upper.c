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

	while (outcome /16 != 0)
	{
		outcome = outcome / 16;
		count++;
	}
	count++;
	hex_upper = malloc(sizeof(int) * count);

	for (i = 0; i < count; i++)
	{
		hex_upper[i] = temp % 16;
		temp = temp / 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (hex_upper[i] > 9)
			hex_upper[i] = hex_upper[i] + 7;
		_putchar(hex_upper[i] + '\0');
	}

	free(hex_upper);
	return (count);
}
