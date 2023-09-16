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
	int i, n, count = 0;

	va_start(args, format);
	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == ' ')
			return (-1);

		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			d = va_arg(args, int);
			_putchar(d);
			count++;
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			s = va_arg(args, char*);
			n = 0;
			while (s[n] != '\0')
			{
				_putchar(s[n]);
				n++;
				count++;
			}
			i++;
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
