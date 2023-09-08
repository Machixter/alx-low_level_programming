#include<stdio.h>
/**
 * main - this is the main function
 *
 * Return: returns 0
 */
int main(void)
{
	int i;
	char x[] = "0123456789abcdef";

	for (i = 0 ; i < 3 ; i++)
	{
		putchar(x[i]);
	}
	for (; i < 16 ; i++)
	{
		putchar(x[i]);
	}
	putchar('\n');
	return (0);
}
