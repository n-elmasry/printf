#include "main.h"
/**
 * print_string - function prints string
 * @str: string to be printed
 * Return: n
*/
int print_string(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	return (n);
}
