#include "main.h"
#include <limits.h> // Include <limits.h> for INT_MAX and INT_MIN

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1;       /* Sign of the number, initialized to positive */
	int result = 0;     /* Resulting integer */

		/* Skip leading whitespace */
		while (*s == ' ' || (*s >= '\t' && *s <= '\r'))
		s++;

	/* Handle signs */
	while (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign *= -1; /* Toggle sign for each negative sign encountered */
		s++;
		}

		/* Process numeric characters */
		while (*s >= '0' && *s <= '9')
		{
		/* Calculate integer value */
		int digit = *s - '0';

		/* Check for overflow before updating result */
		if (result > (INT_MAX - digit) / 10)
		{
			/* Handle overflow condition */
			if (sign == 1) {
				return INT_MAX;

				return INT_MIN;
		}

		/* Update result */
		result = result * 10 + digit;

		/* Move to the next character */
		s++;
	}

	/* Apply sign to the result */
	return (sign * result);
}

