#include <stdio.h>

/**
 * main - entry point
 * Description: prints all possible combination of single digit numbers
 * Return: always 0;
 */

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(44);
			putchar(32);
		}
		n++;
	}
	putchar('\n');	
	return (0);
}
