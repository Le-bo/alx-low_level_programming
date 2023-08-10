#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints all arguments it receives.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Returns: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
