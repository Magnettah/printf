#include "main.h"

/**
 * print_reverse - prints a string in reverse
 * @val: arguments
 * Return: length of string
 */

int print_reverse(va_list val)
{
	char *str = va_arg(val, char*);
	int i, j, len = 0;
	char *rev;

	if (str == NULL)
		str = "(null)";

	while (str[len] != '\0')
		len++;

	rev = malloc((len + 1) * sizeof(char));

	for (i = len - 1, j = 0; i >= 0; i--, j++)
		rev[j] = str[i];

	for (i = 0; rev[i] != '\0'; i++)
		_putchar(rev[i]);

	free(rev);
	return (len);
}

