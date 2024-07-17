/**
 * _strncat - function to concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, const char *src, int n)
{
	int i;
	int b;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[i] = src[b];
		i++;
		b++;
	}

	dest[i] = '\0';

	return (dest);
}
