#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two integers
 * @argc: argumentcount
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num_1, num_2;
	int mltp = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num_1 = atoi(argv[1]);
		num_2 = atoi(argv[2]);

		mltp = num_1 * num_2;
		printf("%d\n", mltp);
	}
	return (0);
}
