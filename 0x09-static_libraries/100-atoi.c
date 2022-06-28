#include "main.h"
/**
 * _atoi - convert string to integer
 * @s: characters string
 * Return: returns an integer
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, c;
	unsigned int result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		c = s[i] - '0';
		if (result > 0 && !(c >= 0 && c <= 9))
			break;
		if (c >= 0 && c <= 9)
			result = result * 10 + c;
		i++;
	}
	result *= sign;
	return (result);
}
