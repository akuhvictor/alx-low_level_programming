#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all single-digit numbers of base 10
 * starting from 0 to 9, followed by a new line, using only two putchar calls.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;

for (num = 0; num <= 9; num++)
{
putchar('0' + num); 
}

putchar('\n'); 

return (0);
}

