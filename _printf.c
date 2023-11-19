#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: character string - composed of zer or more directives
 *
 * Return: number of chars
 */

int _printf(const char *format, ...)
{
	print_f p[] = {{"%c", print_char}, {"%s", print_strings}, {"%r", print_reverse}, {"%%", print_percent}, {"%d", print_dec}, {"%i", print_int}, {"%b", print_binary}, {"%u", print_unsigned}, {"%o", print_oct}, {"%x", print_hex_low}, {"%X", print_hex_upper}, {"%S", print_conv_string}, {"%p", print_pointer}, {"%R", print_rot13}};

	va_list args;
	int a = 0, i = 0, len = 0;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{

			while (a < 14)
			{
				if (p[a].spec[0] == format[i] && p[a].spec[1] == format[i + 1])
				{
					len += p[a].function(args);
					i = i + 2;
					break;
				}
				a++;
			}
			if (a == 14)
			{
				_putchar(format[i]);
				i++;
				len++;
			}
		}
		else
		{
			_putchar(format[i]);
			i++;
			len++;
		}
	}
	va_end(args);
	return (len);
}
