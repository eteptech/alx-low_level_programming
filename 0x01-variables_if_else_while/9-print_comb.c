#include <stdio.h>
/**
 *main- prints all possible combination of numbers
 *Return: 0 on SUCCESS
*/
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar((i % 10) + '0');
		if (i == 9)
			continue;

			putchar(',');
			putchar(' ');
	}

	putchar('\n');
	return (0);
}

