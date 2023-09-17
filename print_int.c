#include <stdio.h>
#include "main.h"

/**
*print_int - prints integrs
*@num: num
*Return: number
*/

int print_int(int num)
{
int number = 0, rev = 0, digit;

if (num == 0)
{
putchar('0');
return 1;
}
if (num < 0)
{
num = -num;
}
while (num > 0)
{
digit = num % 10;
rev = rev * 10 + digit;
num /= 10;
}
while (rev > 0) {
int digit = rev % 10;
putchar('0' + digit);
number++;
rev /= 10;
}
return (number);
}
