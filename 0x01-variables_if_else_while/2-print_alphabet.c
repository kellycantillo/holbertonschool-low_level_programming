#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print alfabet
 *
 * Return: Always (Success)
 */

int main(void)
{
	char ch;

	for(ch= 'a';  ch <= 'z'; ch++)
		puschar(ch);

	puschar('\n');

	return (0);
}


