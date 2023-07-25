#include <stdio.h>

int _printf(const char *format, ...);

int main(void)
{
       	unsigned int value = 98;

        _printf("%b\n", value);

  return 0;
}

int _printf(const char *format, ...)
{
    va_list args;
    int c;

    va_start(args, format);

    while ((c = *format++) != '\0') {
      if (c == '%') {
      switch (*format++) {
        case 'b':
          {
            unsigned int arg = va_arg(args, unsigned int);
            _printf("%08b\n", arg);
          }
          break;
        default:
          _printf("%c", c);
          break;
      }
    } else {
      _printf("%c", c);
    }
  }

  va_end(args);

  return 0;
}

