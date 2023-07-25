#include "main.h"
/**
 * maker - a function formating paramaeters
 * @format:pointing to prompt symbols
 * @lists: points to functions
 * @arg_list: arguments of the fun
 * Return: printed symbols
 */
int maker(const char *format, form_t lists[], val_list arg_list)
{
	int i, int j, int ret, int symbols = 0;


	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; lists[j].list != NULL; j++)
			{
				if (format[i + 1] == lists[j].list[0])
				{
					ret = lists[j].fun(arg_list);
					if (ret == -1)
					{
						return (-1);
					}
					symbols += ret;
					break;
				}
				if (lists[j].list == NULL && format[i + 1] != ' ')
				{
					if (format[i + 1] != '\0')
					{
						put_char(format[i]);
						put_char(format[i + 1]);
						symbols = symbols + 2;
					}
					else
						return (-1);
				}
				i++;
			}
			else
			{
				put_char(format[i]);
				symbols++;
			}
		}
		return (symbols);
	}
