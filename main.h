#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>


int _printf(const char *format, ...);
int _putchar(char c);
int print_string(char *str);
int print_int(int num);
int print_binary(unsigned int n);
int print_hexa_X(unsigned int num);
int print_hexa(unsigned int num);
int print_oct(unsigned int num);
int print_unsigned_int(unsigned int num);
#endif
