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
	int w;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	w = n % 10;
	if (w > 5)
		printf("Last digit of %d is %d and is greater than 5", n, w);
	else if (w == 0)
		printf("Last digit of %d is %d and is 0", n, w);
	else if (w < 6 && w != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, w);
	printf("\n");
	return (0);
}
