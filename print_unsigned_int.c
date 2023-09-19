#include "main.h"
/**
*print_unsigned_int - prints unsigned value of int
*@num:number to be printed
*Return: i
*/

int print_unsigned_int(unsigned int num)
{
int i = 0;
if (num < 10)
putchar (num + '0');
i++;
if (num > 9 && num < 100)
{
_putchar ((num / 10) + '0');
_putchar ((num % 10) + '0');
}
i++;
if (num > 100)
{
i += print_unsigned_int(num / 10);
_putchar (num % 10 + '0');
}
i++;
return (i);
}

