#include <stdio.h>

/**
*main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
int letr;

for (letr = 'a'; letr <= 'z'; letr++)
{
putchar("%x", letr)
}
putchar('\n');
return (0);
}
