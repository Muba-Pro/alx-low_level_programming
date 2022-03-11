#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lwc, upc;

	for (lwc = 'a', upc = 'A' ; lwc <= 'z' && upc <= 'Z'; lwc++, upc++)
	{
		putchar(lwc);
		putchar(upc);
	}
	putchar('\n');
	return (0);
}
