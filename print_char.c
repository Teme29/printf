#include "main.h"
/**
 * print_char - a function printing char
 * @prmtr: lists of parametrs passed
 * @format: a pointer to given format
 * Return: int
 */
int print_char(char *format, val_list prmtr)
{
	(void) format;

	put_char(va_arg(prmtr, int));
	return (1);
}
