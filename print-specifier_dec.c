#include "main.h"
/**
 * print_dec - prints decimal integers
 * @args: arguments
 *
 * Return: number of chars
 */

int print_dec(va_list args)
{
	int num = va_arg(args, int);
	int i = 0;
	int div = 1;
	int t = num;

	if (num < 0)
	{
		_putchar ('-');
		num = -num;
		i++;
	}

	while (t / 10 != 0)
	{
		div *= 10;
		t /= 10;
	}
	while (div != 0)
	{
		_putchar(num / div + '0');
		i++;
		num %= div;
		div /= 10;
	}

	return (i);
}
