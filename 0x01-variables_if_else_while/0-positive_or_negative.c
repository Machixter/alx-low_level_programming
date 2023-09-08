#include<stdlib.h>
#include<time.h>
/*more headers goes here */
#include<stdio.h>
/* betty style doc for function main goes there */
/**
 * main- this is the main function
 *
 * Return: is 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	if (n > 0)
		printf("%i is positive", n);
	else if (n == 0)
		printf("%i is zero", n);
	else
		printf("%i is negative", n);
	printf("\n");
	return (0);
}
