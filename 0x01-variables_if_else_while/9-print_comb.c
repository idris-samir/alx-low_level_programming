#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0
 */

int main(void){
  int digit, dig;

  for (digit = 0; digit < 10; digit++)
  {
    for (dig = 0; dig < 10; dig++)
    {
      putchar('0' + digit);
      putchar('0' + dig);
      putchar(',');
      putchar(' ');
    }
  }
  return (0);
}
