#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
int rcha;

for (rcha = 'z'; rcha >= 'a'; rcha--)
{
putchar(rcha);
}
putchar('\n');
return (0);
}
