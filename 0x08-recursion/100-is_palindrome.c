#include "main.h"
int strlen_recursion(char *s);
int pali_check(char *s, int x, int len);
/**
 * is_palindrome - returns 1 if str is palindrome
 * @s: pointer to string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (pali_check(s, 0, strlen_recursion(s)));
}
/**
 * strlen_recursion - len of str
 * @s: calculates len of str
 * Return: len of str
 */
int strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + strlen_recursion(s + 1));
}
/**
 * pali_check - checks char recursively for palindrome
 * @s: pointer to string
 * @x: repetition
 * @len: length of string
 * Return: 1 or 0
 */
int pali_check(char *s, int x, int len)
{
	if (x >= len)
	{
		return (1);
	}
	if (*(s + x) != *(s + len - 1))
	{
		return (0);
	}
	return (pali_check(s, x + 1, len - 1));
}
