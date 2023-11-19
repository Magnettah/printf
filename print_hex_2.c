#include "main.h"
/**
 * print_hex_2 - returns hexadecimal
 * @outcome: argument
 * Return: number of chars
 */

int print_hex_2(unsigned long int outcome, char spec)
{
	int i;
	long int count = 0;
	char digits_lower[] = "0123456789abcdef";
	char digits_upper[] = "0123456789ABCDEF";
	unsigned long int temp = outcome;
	char *hex;

	while (temp / 16 != 0)
	{
		temp = temp / 16;
		count++;
	}
	if (outcome == 0)
	{
		_putchar('0');
		return (1);
	}
	hex = malloc(sizeof(char) * (count + 1));
	hex[count] = '\0';

	for (i = count - 1; i >= 0; i--)
	{
		int remainder = outcome % 16;

		if (spec == 'x')
		{
			hex[i] = digits_lower[remainder];
		}
		else if (spec == 'X')
		{
			hex[i] = digits_upper[remainder];
		}
		outcome = outcome / 16;
	}
	for (i = 0; hex[i] != '\0'; i++)
	{
		_putchar(hex[i]);
	}

	free(hex);
	return (count);
}
