#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory where it is stored
 * @src: memory where it is copied from
 * @n: number of bytes to be copied
 *
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, const char *src, unsigned int n)
{
	int p = 0;
	int i = n;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}

