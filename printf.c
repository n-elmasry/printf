#include "main.h"
/**
 * _printf - a fucntion prints integer and characters
 * @format: inputted format specfier
 * Return: -1 for failure and count for success
*/
int _printf(const char *format, ...)
{
	va_list args;
	int i, num, count = 0;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					_putchar(va_arg(args, int));
					count++;
					break;
				case 's':
					count += print_string(va_arg(args, char*));
					break;
				default:
					_putchar(format[i]);
					count += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}

	va_end(args);
	return (count);
}
