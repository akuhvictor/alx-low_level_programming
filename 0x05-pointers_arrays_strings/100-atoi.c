#include "main.h"
#include <limits.h> 

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the input string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int digit;
int found_digit = 0;

while (*s != '\0')
{
if (*s == '-')
{
sign *= -1;
}
else if (*s >= '0' && *s <= '9')
{
digit = *s - '0';

if (result > (INT_MAX - digit) / 10)
{
if (sign == 1)
return INT_MAX;
else
return INT_MIN;
}

result = result * 10 + digit;
found_digit = 1;
}
else if (found_digit)
{
break;
}

s++;
}

return (result * sign);
}
