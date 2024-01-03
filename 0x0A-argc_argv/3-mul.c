#include "main.h"
/**
 * main - multiplies two nmbers
 * @argc: argument count
 * @argv arr of arg
 * Return: 1 or 0
 */
int _atoi(char *s);

int main(int argc, char *argv[])
{
	int num1, num2, res;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	res = num1 * num2;
	printf("%d\n", res);

	return (0);
}
/**
 * _atoi - turn pointer to char to int
 * @s: pointer to char
 * Return: int
 */
int _atoi(char *s)
{
	int num = 0;
	int sign = 1;
	int x = 0;
	if (s[0] == '-')
	{
		sign = -1;
		x++;
	}
	while (s[x] != '\0')
	{
		num = num * 10 + (s[x] - '0');
		x++;
	}
	return num * sign;
}
