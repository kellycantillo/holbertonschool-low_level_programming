#include <stdio.h>

/**
 * main - Print number
 *
 * Return: Always (Success)
 */

int main(void)
{
	int n;

	for (n = '0';  n <= '9'; n++)
	{
		putchar(n);
		putchar(' ');
		if (n < '9')
			putchar(',');
	}

	putchar('\n');

	return (0);
}


