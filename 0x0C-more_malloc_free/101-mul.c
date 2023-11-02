#include "main.h"
/**
 * multiply - multiplies to ints
 * @num1: function argmt 1
 * @num2: function argmt 2
 * Return: result
 *
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}
/**
 * isnumber - checks if input is int
 * @str: pointer to number
 * Return: 0
 */
int isnumber(char *str)
{
	int x;

	for (x = 0 ; str[x] != '\0' ; x++)
	{
		if (!isdigit(str[x]))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - function main
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 *
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (98);
	}
	if (!isnumber(argv[1]) || !isnumber(argv[2]))
	{
		printf("ERROR\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = multiply(num1, num2);
	printf("%d\n", result);

	return (0);

}

