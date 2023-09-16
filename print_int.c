#include <stdio.h>
#include <stdlib.h>

/**
 * print_int - prints integers
 * @num: the integer to be printed
 * Return: the number of characters printed
 */
int print_int(int num)
{
int i, temp, numbers, count = 0;
char* num_array;
if (num == 0)
{
putchar('0');
return 1;
}

if (num < 0)
{
putchar('-');
count++;
num = -num;
}

temp = num;
numbers = 0;

while (temp > 0)
{
temp /= 10;
numbers++;
}

num_array = (char *)malloc((numbers + 1) * sizeof(char));

if (num_array == NULL)
{
return (-1);
}

for (i = numbers - 1; i >= 0; i--)
{
num_array[i] = '0' + (num % 10);
num /= 10;
}

num_array[numbers] = '\0';

i = 0;
while (num_array[i] != '\0')
{
putchar(num_array[i]);
count++;
i++;
}

free(num_array);
return (count);
}
