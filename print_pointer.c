#include "main.h"
/**
 * print_pointer - prints address
 * @args: parameter
 * Return: number
 */

int print_pointer(va_list args)
{
	void *ptr = va_arg(args, void *);
	char *str = "(nil)";
	unsigned long int temp = (unsigned long int)ptr;
	int count = 0;

	if (!ptr)
	{
		while (str[count] != '\0')
		{
			_putchar(str[count]);
			count++;
		}
		return (count);
	}
	_putchar('0');
	_putchar('x');
	return (print_hex(temp) + 2);
}

/**
 * print_hex - converts to hexadecimal
 * @outcome: argument
 * Return: number of characters
 */

int print_hex(unsigned long int outcome)
{
	int i, digit, count = 0;
	unsigned long int temp = outcome;
	char *hex_lower = "0123456789abcdef";

	if (outcome == 0)
	{
		_putchar('0');
		return (1);
	}

	while (temp != 0)
	{
		temp /= 16;
		count++;
	}

	if (count < 2)
		count = 2;

	for (i = count - 1; i >= 0; i--)
	{
		digit = (outcome >> (i * 4)) & 0xF;
		_putchar(hex_lower[digit]);
	}
	return (count);
}
