#ifndef MAIN_H
#define MAIN_h
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int strlen_recursion(char *s);
int square_root(int n, int res);
int is_prime_number(int n);
int prime_number(int n, int p_n);
int is_palindrome(char *s);
int pal_check(char *s, int r, int len);
int wildcmp(char *s1, char *s2);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);


#endif
