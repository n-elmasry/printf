#include <stdlib.h>
#include "main.h"

/**
 * print_int - prints integers
 * @num: the integer to be printed
 * Return: the number of characters printed
 */
int print_int(int n)
{
if (n < 0)
{
putchar('-');
n = -n;
}
if (n / 10)
print_int(n / 10);

putchar(n % 10 + '0');
return(n);
}
