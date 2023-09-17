#include "main.h"
/**
 * _printf - a fucntion prints integer and characters
 * @format: inputted format specfier
 * Return: -1 for failure and count for success
*/
int _printf(const char *format, ...)
{
	va_list args;
	int i, count = 0;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':{
				count += _putchar(va_arg(args, int));
				i++;
				break;
					}
				case 's':{
				count += print_string(va_arg(args, char*));
				i++;
				break;
					}
				case '%':{
				count += _putchar('%');
				i++;
				break;
					 }
				default:{
				count += _putchar('%');
				break;
					}
			}}
		else
		{
			_putchar(format[i]);
			count++;
		}}
	va_end(args);
	return (count);
}
