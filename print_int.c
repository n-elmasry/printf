#include <stdio.h>
#include "main.h"
/**
*print_int - prints integrs
*@num: num
*Return: number
*/
int print_int(int num)
{
int i = 0, j;
char num_array[12];
int number = num;
if (num < 0)
{
_putchar('-');
num = -num;
}
while (num > 0)
{
num_array[i++] =  num % 10 + '0';
num /= 10;
}
for (j= i - 1; j >= 0; j--)
{
_putchar(num_array[j]);
}
return (number);
}
