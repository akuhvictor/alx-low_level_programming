/**
 * Description: This program prints alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */

#include "main.h"

void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}

_putchar('\n');
}
