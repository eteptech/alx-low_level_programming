#include <stdio.h>
#include <stdlib.h>

/**
 *   main - prints the alphabet in lowercase and in uppercase,
 *   followed by a new line
 *   Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		if (c != 'q' && c != 'e')
		putchar(c);
	putchar('\n');
	exit(EXIT_SUCCESS);
}
