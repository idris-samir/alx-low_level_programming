#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
		if (num  == 9)
			break;

		putchar(',');
		putchar(' ');
	}

	return (0);
}
