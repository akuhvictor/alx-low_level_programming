#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number to generate the times table for.
 */
void print_times_table(int n)
{
if (n >= 0 && n <= 15)
{
int product;

for (int row = 0; row <= n; row++)
{
for (int column = 0; column <= n; column++)
{
product = row * column;

if (column != 0)
_putchar(' ');

if (product < 10)
{
_putchar(' ');
_putchar(' ');
}
else if (product < 100)
{
_putchar(' ');
}

if (column == 0)
{
_putchar('0');
}
else
{
if (product >= 100)
_putchar((product / 100) + '0');
if (product >= 10)
_putchar(((product / 10) % 10) + '0');
_putchar((product % 10) + '0');
}

if (column != n)
_putchar(',');
}
_putchar('\n');
}
}
}
