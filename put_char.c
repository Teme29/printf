#include "main.h"
/**
 * put_char - print char on scrren
 * @c: char variable to be printed
 * Return: int
 */
int put_char(char c)
{
	return (write(1, &c, 1));
}
