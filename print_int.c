#include "main.h"

/**
*print_int - prints integrs
*@num: num
*Return: i
*/

int print_int(int num)
{
int i = 0;

if (num < 0)
{
_putchar('-');
num = -num;
i++;
}

if (num / 10)
i += print_int(num / 10);

_putchar(num % 10 + '0');
i++;

return (i);
}
