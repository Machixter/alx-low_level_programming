#include<stdio.h>
/**
 * main - this is main function
 *
 * Return: is always 0
 */
int main(void)
{
	int w, x, y, z;

	for (w = 0 ; w <= 9 ; w++)
	{
		for (x = 0 ; x <= 9 ; x++)
		{
			for (y = 0; y <= 9 ; y++)
			{
				for (z = y + 1 ; z <= 9 ; z++)
				{
					putchar(w + '0');
					putchar(x + '0');
					putchar(' ');
					putchar(y + '0');
					putchar(z + '0');
					if (w != 99 || x != 99)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
