#include "main.h"
#include <unistd.h>
#include <stdio.h>   

/**
 * print_int - print inteegrs
 * @n: The integer to print
 */

int print_int(int num)
{
    int i,  numbers;
    char num_array[32];
    numbers = snprintf(num_array, sizeof(num_array), "%d", num);
    for (i = 0; i < numbers; i++)
    {
        putchar(num_array[i]);
    }
    return (numbers);
}
