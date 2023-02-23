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

	fwrite(str, sizeof(str), 1, stderr);
	return (1);
}
