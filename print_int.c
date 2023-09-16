#include "main.h"
/**
*print_int - prints integrs
*@num: num
*Return: number
*/

int print_int(int num)
{
int i = 0, j, number = 0;
int num_array[10];

if (num == 0)
{
putchar('0');
return 1;
}
if (num < 0)
{
putchar('-');
num = -num;
number++;
}

while (num > 0)
{
num_array[i] = num % 10;
num /= 10;
i++;
}

for (j = i - 1; j >= 0; j--)
{
putchar('0' + num_array[j]);
number++;
}
return (number);
}
