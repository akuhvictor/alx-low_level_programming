#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all the numbers of base 16 in lowercase,
 * followed by a new line, using only three putchar calls.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char hex_digits[] = "0123456789abcdef";
int i;

for (i = 0; i < 16; i++)
{
putchar(hex_digits[i]);
}

putchar('\n');

return (0);
}
