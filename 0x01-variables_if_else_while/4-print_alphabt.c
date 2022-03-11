#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lwc;

	for (lwc = 'a'; lwc <= 'z'; lwc++)
	{
		if (lwc == 'e' || lwc == 'q')
		{
			continue;
		}
	else
		{
			putchar(lwc);
		}
	}

	putchar('\n');
	return (0);
}

