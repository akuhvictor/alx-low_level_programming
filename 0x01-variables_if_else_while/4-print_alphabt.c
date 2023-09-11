#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Function prints alphabets in lowercase 
 * except letter q and e 
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
putchar(letter);
}

putchar('\n');

return (0);
}
