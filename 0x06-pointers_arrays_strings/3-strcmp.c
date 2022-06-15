#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: return the difference
 */
int _strcmp(char *s1, char *s2)
{
	int i, sum = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			sum = (s1[i] - s2[i]);
			break;
		}
		if (s1[i] > s2[i])
		{
			sum = (s1[i] - s2[i]);
			break;
		}
	}
	return (sum);
}
