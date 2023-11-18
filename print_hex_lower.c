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

	while (outcome /16 != 0)
	{
		outcome = outcome / 16;
		count++;
	}
	count++;
	hex_lower = malloc(sizeof(int) * count);

	for (i = 0; i < count; i++)
	{
		hex_lower[i] = temp % 16;
		temp = temp / 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (hex_lower[i] > 9)
			hex_lower[i] = hex_lower[i] + 39;
		_putchar(hex_lower[i] + '\0');
	}

	free(hex_lower);
	return (count);
}
