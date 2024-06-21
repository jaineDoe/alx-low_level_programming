#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of three different digits
 *              in ascending order, separated by ", ".
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 <= 7; num1++) /* Hundreds place */
	{
		for (num2 = num1 + 1; num2 <= 8; num2++) /* Tens place */
		{
			for (num3 = num2 + 1; num3 <= 9; num3++) /* Units place */
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(num3 + '0');

				if (!(num1 == 7 && num2 == 8 && num3 == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}


