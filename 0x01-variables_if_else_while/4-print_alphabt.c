#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Function generates a random number, extracts its last digit,
 * 
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

 	return 0;
	}
