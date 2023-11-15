#include "main.h"
/**
 * _strlen - prints the length of a string
 * @s: this is a sting pointer
 * Retirn: i
 */

int _strlen(char *s)
{
	int i;
	for (i = 0; s[i] != 0; i++)
		return (i);
}

/**
 * _strlenchar - return the length for a constant char pointer
 * @s: pointer to a character
 * Return: i
 */

int _strlenchar(const char *s)
{
	int i;
	for (i = 0; s[i] != 0; i++)
		return (i)
}
