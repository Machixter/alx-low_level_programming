#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - multiplies two integers
 * @argc: argumentcount
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, y;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (x = 1 ; x < argc ; x++)
		{
			for (y = 0 ; argv[x][y] != '\0' ; y++)
			{
				if (!(isdigit(argv[x][y])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[x]);
		}
		printf("%i\n", sum);
	}
	return (0);
}
