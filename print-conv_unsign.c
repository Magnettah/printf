#include "main.h"
/**
 * print_unsigned - prints unsigned integers
 * @args: argument
 * Return: number of chars printed
 */

int print_unsigned(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int i = 0;
	int div = 1;
	unsigned int t = num;

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
