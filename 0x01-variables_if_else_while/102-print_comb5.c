#include<stdio.h>
/**
 * main - this is main function
 *
 * Return: is always 0
 */
int main(void)
{
	int x, y;

	for (x = 0 ; x <= 98 ; x++)
	{
		for (y = x ; y <= 99 ; y++)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(' ');
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');
			if (x != 99 || y != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
