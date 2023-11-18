#include "main.h"
/**
 * print_oct - returns the octal representation of an int
 * @args: argument
 *
 * Return: number of chars
 */

int print_oct(va_list args)
{
	int i;
	int count = 0;
	int *oct;
	unsigned int outcome = va_arg(args, unsigned int);
	unsigned int p = outcome;

	if (outcome == 0)
	{
		_putchar('0');
		return (1);
	}

	while (p != 0)
	{
		p /= 8;
		count++;
	}

	oct = malloc(sizeof(int) * count);

	i = count - 1;

	while (outcome != 0)
	{
		oct[i] = outcome % 8;
		outcome = outcome / 8;
		i--;
	}

	for (i = 0; i < count; i++)
		_putchar(oct[i] + '0');

	free(oct);
	return (count);
}
