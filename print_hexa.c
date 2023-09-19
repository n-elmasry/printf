#include "main.h"
/**
 * print_hexa - a function prints hexadecimal
 * @num: inputed number
 * Return: -1 for success and i for success
*/
int print_hexa(unsigned int num)
{
	int i = 0;
	char hexa[16] = {'0', '1', '2', '3', '4', '5',
	'6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

	if (num < 16)
	{
		_putchar(hexa[num]);
		i++;
	}
	else
	{
		print_hexa(num / 16);
		_putchar(hexa[num % 16]);
		i++;
	}
	return (i);
}
/**
 * print_hexa_X - a function prints hexadecimal
 * @num: inputed number
 * Return: -1 for success and i for success
*/
int print_hexa_X(unsigned int num)
{
	int i = 0;
	char hexa[16] = {'0', '1', '2', '3', '4', '5',
	'6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

	if (num < 16)
	{
		_putchar(hexa[num]);
		i++;
	}
	else
	{
		print_hexa_X(num / 16);
		_putchar(hexa[num % 16]);
		i++;
	}
	return (i);
}
