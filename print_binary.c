#include "main.h"
/**
 * print_binary - print int in binary
 * @n: int to be printed
 * Return: numbers printed
 */
int print_binary(unsigned int n)
{
int i, count = 0;
char bin_num[64];

if (n == 0)
return (_putchar('0'));

while (n > 0)
{
bin_num[count++] = (n % 2) + '0';
n /= 2;
}

for (i = count - 1; i >= 0; i--)
_putchar(bin_num[i]);

return (count);
}
