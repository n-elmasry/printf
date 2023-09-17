#include <stdlib.h>
#include "main.h"

/**
 * print_int - prints integers
 * @num: the integer to be printed
 * Return: the number of characters printed
 */

int print_int(int num)
{
int count = 0;

if (num < 10)
{
putchar(num + '0');
return count;
}
print_int(num / 10);
putchar((num % 10) + '0');
count++;
return (count);
}
