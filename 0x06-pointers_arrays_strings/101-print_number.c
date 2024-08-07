#include "main.h"
#include <stdio.h>

/**
 * print_number - print numbers as characters
 * @n: integer parameter
 * Return: void
 */
int _putchar(char c);

void print_number(int n)
{
	unsigned int n1;

	n1 = n;
	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}

	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}
