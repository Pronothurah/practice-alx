#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all base 10 numbers
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 48;i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
