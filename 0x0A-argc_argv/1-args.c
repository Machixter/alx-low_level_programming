#include "main.h"
/**
 * main - prints name of program passed to it
 * @argv: arr of arg
 * @argc: arg count
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));

	return (0);
}
