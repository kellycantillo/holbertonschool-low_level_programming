#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print alfabet uppercase
 *
 * Return: Always (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a';  ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');

	
	for (ch = 'A';  ch <= 'Z'; ch++)
		putchar(ch);
	
	putchar('\n');
	
	return (0);
}


