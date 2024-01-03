#include "main.h"
/**
 * main prints minimum num of coins to change from amt of mny
 * @argc: argm count
 * @argv: argm vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int a, x, res;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	res = 0;

	if (a < 0)
	{
		printf("0\n");
		return (0);
	}
	for (x = 0 ; x < 5 && a >= 0 ; x++)
	{
		while (a >= coins[x])
		{
			res++;
			a -=coins[x];
		}
	}
	printf("%d\n", res);
	return (0);
}
