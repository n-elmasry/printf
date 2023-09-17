#include "main.h"

/**
*print_int - prints integrs
*@num: num
*Return: number
*/

int print_int(int num)
{
char num_array[12];
int i = 0, numbers;
int negative_num = 0;

if (num < 0)
{
negative_num = 1;
num = -num;
}

do {
num_array[i++] = '0' + (num % 10);
num /= 10;
}

while (num);

if (negative_num)
{
num_array[i++] = '-';
}
numbers = 0;

while (i > 0)
{
putchar(num_array[--i]);
numbers++;
}
return (numbers);
}

