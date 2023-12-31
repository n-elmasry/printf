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
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
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
				case 'd':{
				case 'i':
				count += print_int(va_arg(args, int));
				i++;
				break;
					}
				case 'b':{
				count += print_binary(va_arg(args, unsigned int));
				i++;
				break;
					 }
				case 'x':{
				count += print_hexa(va_arg(args, unsigned int));
				i++;
				break;
					 }
				case 'X':{
				count += print_hexa_X(va_arg(args, unsigned int));
				i++;
				break;
					 }
				case 'u':{
				count += print_unsigned_int(va_arg(args, unsigned int));
				i++;
				break;
					}
				case 'o':{
				count += print_oct(va_arg(args, unsigned int));
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
