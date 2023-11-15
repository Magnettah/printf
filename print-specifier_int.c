#include "main.h"
/**
 * print_int -prints integers
 * @args: argument
 * Return: number of char
 */

int print_int(va_list, args)
{
	int num = va_arg(args, int);
	int i = 0;

	if (num < 0)
	{
		_putchar ('-');
		num = -num;
		i++;
	}
	if (num / 10 != 0)
	{
		i += print_int_recursive(num / 10);
		_putchar(num % 10 + '0');
		i++
			return (i);
	}
}
