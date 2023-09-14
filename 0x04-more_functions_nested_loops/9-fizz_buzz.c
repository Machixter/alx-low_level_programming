#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 1 ; x <= 100 ; x++)
	{
		if (x % 3 == 0)
		{
			printf("%s ", "FIZZ");
		}
		else if (x % 5 == 0)
		{
			printf("%s ", "BUZZ");
		}
		else if ((x % 5 == 0) && (x % 3 == 0))
		{
			printf("%s ", "FIZZBUZZ");
		}
		else
			printf("%i ", x);
		if (x != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
