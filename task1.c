#include <stdarg.h>
#include "main.h"
#include <stdio.h>
/**
*_printf - prints anything
*@format: format string
*Return:
*/

int _printf(const char *format, ...)
{
int i, num, count = 0;
char num_array[20];
va_list args;
va_start(args, format);

while (*format)
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'd':
case 'i':
{
num = va_arg(args, int);

sprintf(num_array, "%d", num);
for (i = 0; num_array[i]; i++)
{
putchar(num_array[i]);
count++;
}
break;
}
default:
putchar('%');
putchar(*format);
count += 2;
break;
}

}
else
{
putchar(*format);
count++;
}
format++;
}
va_end(args);
return (count);
}
