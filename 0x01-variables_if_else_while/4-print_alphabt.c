#include <stdio.h>

/**
 * main - entry point
 * Decription: prints alphabet in lowercase xcept q & e
 * Return: aLways 0
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n != 113 && n != 101)
		{
			putchar(n);	
		}
		n++;
	}
	putchar('\n');
	return (0);
}
