#include "main.h"

/**
 * print_char - prints characters
 * @args: arguments
 * Return: 1 if successful and -1 if it fails
 */

int print_char(va_list args)
{
	char s = va_arg(args, int);

	if (s == '\0')
	{
		_putchar('0');
		return (-1);
	}

	_putchar(s);
	return (1);
}
