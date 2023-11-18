#include "main.h"
/**
 * print_strings - prints strings
 * @args: arguments of the function
 *
 * Return: string length
 */

int print_strings(va_list args)
{
	char *s = va_arg(args, char *);
	int i, len;

	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}
