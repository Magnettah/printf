#include "main.h"
/**
 * print_binary - prints integer in binary
 * @args: arguments
 * Return: number of chars
 */

int print_binary(va_list args)
{
	unsigned int result = va_arg(args, unsigned int);
	int i;
	int count = 0;
	int sig = 0;

	for (i = 31; i >= 0; i--)
	{
		if ((result >> i) & 1)
		{
			sig = i;
			break;
		}
	}
	if (sig == 0)
	{
		_putchar('0');
		count++;
	}

	for (i = sig; i >= 0; i--)
	{
		_putchar(((result >> i) & 1) + '0');
		count++;
	}
	return (count);
}
