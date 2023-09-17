#include <unistd.h>
#include "main.h"
/**
 * print_int - prints integers
 * @n: the integer to be printed
 * Return: the number of characters printed
 */

int print_int(int n)
{
char num_array[12];
int count = 0, i, j;
int negativ_num = 0;

if (n == -2147483648)
{
write(1, "-", 1);
write(1, "2147483648", 10);
return (11);
}
if (n < 0)
{
negativ_num = 1;
n = -n;
count++;
}

i = 0;
while (n > 0)
{
num_array[i++] = (n % 10) + '0';
n /= 10;
}

if (negativ_num)
{
write(1, "-", 1);
count++;
}

for (j = i - 1; j >= 0; j--)
{
write(1, &num_array[j], 1);
count++;
}

return (count);
}

