#include "main.h"
/**
 * main - prints arguments it recieves
 * @argc: arg count
 * @argv: arr of argm
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0 ; x < argc ; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
