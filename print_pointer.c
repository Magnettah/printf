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
	long int temp;
	int i, a;

	if (!ptr)
	{
		for (i = 0; str[i] != '\0'; i++)
			_putchar(str[i]);
		return (i);
	}
	temp = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	a = print_hex_2(temp);
	return (a + 2);

}
