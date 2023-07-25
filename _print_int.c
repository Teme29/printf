#include <stdio.h>

int b_conversion_specifier(unsigned int value)
{
char buffer[32];
int count = 0;

while (value > 0)
{
buffer[count++] = '0' + (value % 2);
value >>= 1;
}

buffer[count] = '\0';

return (count);
}

int main(void);
{
unsigned int value = 98;

printf("%b\n", value);

return (0);
}


