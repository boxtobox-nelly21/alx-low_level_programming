#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, 1, sizeof(str), stderr);
	return (1);
}
