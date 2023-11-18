#include "main.h"
/**
 * print_conv_string - prints string
 * @args: argument
 *
 * Return: length of the string
 */

int print_conv_string(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0;
	unsigned char digit1;
	unsigned char digit2;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;

			digit1 = *str / 16;
			digit2 = *str % 16;

			if (digit1 < 10)
				_putchar('0' + digit1);
			else
				_putchar('A' + digit1 - 10);

			if (digit2 < 10)
				_putchar('0' + digit2);
			else
				_putchar('A' + digit2 - 10);
		}
		else
		{
			_putchar(*str);
			len++;
		}
		str++;
	}
	return (len);
}
