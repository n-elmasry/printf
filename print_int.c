#include <stdio.h>
#include "main.h"

void print_int(int num)
{
int i = 0, j, digit;
char num_array[10];
if (num == 0)
{
putchar('0');
return;
}
if (num < 0)
{
putchar('-');
num = -num;
}
while (num > 0)
{
digit = num % 10;
num_array[i++] = '0' + digit;
num /= 10;
}
for (j= i - 1; j >= 0; j--)
{
putchar(num_array[j]);
}
}
