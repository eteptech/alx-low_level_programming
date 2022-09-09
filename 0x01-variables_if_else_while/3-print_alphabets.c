#include <stdio.h>
#include <stdlib.h>

/**
 *   main - prints the alphabet in lowercase and in uppercase,
 *   followed by a new line
 *   Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');
	exit(EXIT_SUCCESS);
}
