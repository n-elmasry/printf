#include <limits.h>
#include "main.h"
/**
 * print_int - prints integers
 * @num: integer to print
 * Return: number of characters printed
 */
int print_int(int num)
{
int i = 0;

if (num == INT_MIN)
{

i += _putchar('-');
num = -(num + 1);
i++;

if (num / 10)
i += print_int(num / 10);

_putchar(num % 10 + '1');
return (i);
}
else if (num < 0)
{
i += _putchar('-');
num = -num;
}

if (num / 10)
i += print_int(num / 10);
_putchar(num % 10 + '0');
i++;

return (i);
}
