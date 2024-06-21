#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two digits (0-9),
 *              where the two digits are different, in ascending order
 *              using only putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens, ones;

	for (tens = 0; tens <= 8; tens++)
	{
		for (ones = tens + 1; ones <= 9; ones++)
		{
			putchar((tens % 10) + '0');
			putchar((ones % 10) + '0');

			if (tens != 8 || ones != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

