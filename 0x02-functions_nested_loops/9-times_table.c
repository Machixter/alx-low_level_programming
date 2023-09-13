#include "main.h"
#include<stdio.h>
/**
 * times_table - prints the nine times table
 *
 * Return:
 */

void times_table(void)
{
	int x, y, ans;

	for (x = 0 ; x < 10 ; x++)
	{
		for (y = 0 ; y < 10 ; y++)
		{
			ans = x * y;
			/*printf("%2d, ", ans);*/
			if (y == 0)
			{
				printf("%d,", ans);
			}
			else
			{
				printf(" %2d", ans);
				if (y != 9)
				{
					printf(",");
				}
			}
		}
		printf("\n");
	}
}
