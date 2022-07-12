#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_rev - Prints a str in reverse.
 * @arg: The string to be printed.
 *
 * Return: The string.
 */
int print_rev(va_list arg)
{
char *str = va_arg(arg, char *);
int i, m = 0;
if (str == NULL)
str = "(null)";
while (str[m] != '\0')
m++;
for (i = m - 1; i >= 0; i--)
_putchar(str[i]);
return (m);
}
