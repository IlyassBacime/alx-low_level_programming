#include "main.h"

/**
* _strncpy - Function that copies a string
* @dest: String
* @src: String
* @n: String
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
