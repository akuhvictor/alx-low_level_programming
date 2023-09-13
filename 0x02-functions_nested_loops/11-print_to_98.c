#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_to_98 - Prints natural numbers from n to 98.
 * @n: The starting number.
 */
void print_to_98(int n)
{
int i;

    if (n <= 98)
    {
        for (i = n; i <= 98; i++)
        {
            printf("%d", i);
            if (i != 98)
                printf(", ");
        }
    }
    else
    {
        for (i = n; i >= 98; i--)
        {
            printf("%d", i);
            if (i != 98)
                printf(", ");
        }
    }
    printf("\n");
}

int main(void)
{
    print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);
    return (0);
}

