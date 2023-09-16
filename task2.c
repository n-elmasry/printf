#include "main.h"
#include <stdarg.h>
#include <stdio.h>
case 'b':
{
int num = va_arg(args, int);
int i ;

for (i = 31; i >= 0; i--)
{
putchar('0' + (num % 2));
num >>= 1;
}
break;
}
