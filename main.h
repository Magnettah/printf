#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - this is a converster for printf
 * @spec: character pointer of the specifier
 * @function: convesrion specifier function
 */

typedef struct format
{
	char *spec;
	int (*function)();
} print_f;

int _putchar(char c);
int print_char(va_list args);
int print_strings(va_list args);
int _strlen(const char *s);
int print_percent(void);
int print_int(va_list args);
int print_dec(va_list args);
int print_binary(va_list args);
int print_unsigned(va_list args);
int print_oct(va_list args);
int print_hex_low(va_list args);
int print_hex_upper(va_list args);
int print_conv_string(va_list args);
int print_pointer(va_list args);
int print_hex(unsigned long int outcome);
int print_reverse(va_list val);
int print_rot13(va_list args);
int _printf(const char *format, ...);

#endif
