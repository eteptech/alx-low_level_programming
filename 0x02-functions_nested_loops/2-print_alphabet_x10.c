#include <stdio.h>

/**
 *print_alphabet_x10- print x10 alphbet, In lowercase
 */

void print_alphabet_x10(void)
{
	int i;
	char ch;
	for (i = 1; i < 11; i++)
	{
		for (ch = 97; ch < 123; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}

int main(void)
{
	print_alphabet_x10();
	return (0);
}