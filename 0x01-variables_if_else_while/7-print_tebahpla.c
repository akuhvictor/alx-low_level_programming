#include <stdio.h>

int main(void)
{
    int i;

    for (i = 25; i >= 0; i--)
    {
        putchar('a' + i);
    }

    putchar('\n');

    return 0;
}
