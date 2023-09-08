#include<stdio.h>
/**
 * main - this is the main function
 *
 * Return: returns 0
 */
int main(void)
{
	int i;
	char x;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (x = 'a' ; i <= 'f' ; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
