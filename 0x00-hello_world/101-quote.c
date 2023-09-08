#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (indicating an error)
 */
int main(void)
{
 const char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
 ssize_t len = 59;

 ssize_t wr = write(2, msg, len);
 if (wr != len)
  return (1);

 return (1);
}
