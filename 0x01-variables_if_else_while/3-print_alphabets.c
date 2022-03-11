#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lwc, upc;

	for (lwc = 'a'; lwc <= 'z'; lwc++)
	{
		putchar(lwc);
	}
	for (upc = 'A'; upc <= 'Z'; upc++)
	{
		putchar(upc);
	}

	putchar('\n');
	return (0);
}
