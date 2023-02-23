#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints a string
 * to standard error
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, 1, sizeof(str), stderr);
	return (1);
}
