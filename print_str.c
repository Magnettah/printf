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
	int i, len = 0;

	if (s == NULL)
	{
		s = "(null)";
	}

	len = _strlen(s);

	for (i = 0; i < len; i++)
	{
		_putchar(s[i]);
	}
	return (len);
}

/**
 * _strlen - prints the length of a string
 * @s: pointer to an array of chars
 * Return: length
 */

int _strlen(const char *s)
{
	const char *ptr = s;

	while (*ptr)
	{
		ptr++;
	}

	return (ptr - s);
}
