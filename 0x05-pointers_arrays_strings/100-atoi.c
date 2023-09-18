#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the input string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
int sign = 1; // Initialize sign to positive
int result = 0;
int digit;
int found_digit = 0;
while (*s != '\0')
{
if (*s == '-')
{
sign *= -1; // Toggle the sign for negative numbers
}
else if (*s >= '0' && *s <= '9')
{
digit = *s - '0';
result = result * 10 + digit;
found_digit = 1;
}
else if (found_digit)
{
break;
}

s++;
}

return result * sign;
}
