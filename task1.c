#include <stdarg.h>
#include <stdio.h>

case 'd':
case 'i':
{
int num = va_arg(args, int);
char num_array[20];
sprintf(num_array, "%d", num);
for (int i = 0; num_array[i]; i++)
{
putchar(num_array[i]);
count++;
}
break;
}
