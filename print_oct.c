#include "main.h"
/**
*print_oct - prints octal value of int
*@num:number to be converted
*Return:count
*/
int print_oct(unsigned int num)
{
int i, count = 0;

if (num == 0)
{
_putchar('0');
return (1);
}
i = num % 8;
if (num >= 8)
count = print_oct(num / 8);

_putchar('0' + i);

return (count + 1);
}
