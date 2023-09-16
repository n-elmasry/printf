#include <stdlib.h>
#include "main.h"

/**
 * print_int - prints integers
 * @num: the integer to be printed
 * Return: the number of characters printed
 */

void print_int(int num)
{
if (num < 10)
{
putchar(num + '0');
return;
}
print_int(num / 10);
putchar((num % 10) + '0');
}
