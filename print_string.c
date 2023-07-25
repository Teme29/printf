#include "main.h"
/**
 * print_string -  a funciton  printing a string
 * @prmtr: list of paramaters
 * @format:pointer to string format
 * Return: int
 */
int print_string(char *format, va_list prmtr)
{
	char *string = va_arg(prmtr, char);
	int count = 0;
	(void)format;

	if (string == NULL)
	{
		string = ("null");
	}
	while (*string)
	{
		put_char(*string);
		strng++;
		count++;
	}
	return (count);
}
