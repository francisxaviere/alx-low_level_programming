#include "main.h"
#include <stdlib.h>
/**
* _strncpy - copy n character string to dest
* @dest: character pointer point to char array
* @src: character pointer point to char array
* @n: integer
* Return: return copy of char string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '\0'; c++)
		dest[c] = src[c];
	for ( ; c < n; c++)
		dest[c] = '\0';
	return (dest);
}
