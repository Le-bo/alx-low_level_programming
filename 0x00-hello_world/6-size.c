#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer it is compiled and run on.
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

prntf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
prntf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
prntf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
prntf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
prntf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
