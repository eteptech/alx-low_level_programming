#include <stdio.h>

/**
 * main- Prints number 0..100 
 * if % 3 prints 'Fizz-Buzz test'
 * Return: 0 Always
 */
int main(void)
{
	int i;
	
	i=1;
	char ch[10];
	while (i < 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("%d", i);
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
