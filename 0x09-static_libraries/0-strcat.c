#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: entered value
 * @src: entered value
 *
 * Return: char pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	a = 0
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
}

