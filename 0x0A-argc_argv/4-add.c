#include "main.h"
/**
 * check-num - checks string digits
 * @str: array string
 * Return: 0
 *
 */
int check_num(char *str)
{
	unsigned int counter;
	counter = 0;

	while (counter < strlen(str))
	{
		if (!isdigit(str[counter]))
		{
			return (0);
		}
		counter++;
	}
	return (1);
}
/**
 * main - adds two int
 * @argc: argm count
 * @argv: argm vector
 * Return: (0) 
 *
 */
int main(int argc, char *argv[])
{
	int counter;
	int str_int;
	int sum = 0;

	counter = 1;
	while (counter < argc)
	{
		if (check_num(argv[counter]))
		{
			str_int = atoi(argv[counter]);
			sum += str_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		counter++;
	}
	printf("%d\n", sum);
	return (0);
}
