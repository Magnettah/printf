#include "main.h"
/**
 * printf_strings - prints strings
 * @args: arguments of the function
 *
 * Return: string length
 */

int printf_strings(va_list args)
{
	char *s = va_arg(args, char*);
	int i, len;

	if (s == NULL)
	{
		s = "(NULL)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
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
