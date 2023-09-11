#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Function to print all sigle digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 0; i <= 9; i++)
{
putchar(i + '0');
}

putchar('\n');

return (0);
}
