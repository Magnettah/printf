#include "main.h"

/**
 * print_reverse - prints a string in reverse
 * @val: arguments
 * Return: length of string
 */

int print_reverse(va_list val)
{
	char *str = va_arg(val, char*);
	int a, b = 0;

	if (str == NULL)
		str = "(null)";

	while (str[b] != '\0')
		b++;

	for (a = b - 1; a >= 0; a--)
		_putchar(str[a]);

	return (b);
}

