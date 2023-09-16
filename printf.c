#include "main.h"
/**
 * _printf - a fucntion prints integer and characters
 * @format: inputted format specfier
 * Return: -1 for failure and count for success
*/
int _printf(const char *format, ...)
{
	va_list args;
	char *s, d;
	int i, count = 0;

	va_start(args, format);
	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c': {
						  d = va_arg(args, int);
						  _putchar(d);
						  count++;
						  i++;
						break;
					}
				case 's': {
						  s = va_arg(args, char*);
						  count += print_string(s);
						  i++;
						break;
					}
				default: {
						return (-1);
					}
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
