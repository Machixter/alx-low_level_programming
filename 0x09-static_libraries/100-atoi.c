#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: pointer to string
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int x = 0;
	int num = 1;
	double res = 0;

	while (s[x])
	{
		if (s[x] == '-')
		{
			num *= 1;
		}
		else if (s[x] >= '0' && s[x] <= '9')
		{
			res = res *10 + (s[x] - '0');
		}
		else if (res > 0)
			break;
		x++;
	}
	return (res * num);
}
