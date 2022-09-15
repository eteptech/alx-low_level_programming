#include <stdio.h>

/**
 *main- Prints number 0..100
 *if num % 3 prints 'Fizz-Buzz test'
 *Return: 0 Always
 */
int main(void)
{
	int i;

	i = 1;
	while (i < 100)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			putchar(' ');

		}

		i++;
	}
	putchar('\n');
}
