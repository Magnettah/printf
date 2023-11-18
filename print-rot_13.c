#include "main.h"
/**
 * print_rot13 - prinrs the rot13'ed string
 * @args: arguments
 * Return: length of string
 */

int print_rot13(va_list args)
{
	char *str = va_arg(args, char *);
	int counter = 0;
	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char b[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		int i, num = 0;

		for (i = 0; a[i] != '\0' && !num; i++)
		{
			if (*str == a[i])
			{
				_putchar(b[i]);
				counter++;
				num = 1;
			}
		}
		if (!num)
		{
			_putchar(*str);
			counter++;
		}
		str++;
	}

	return (counter);
}
