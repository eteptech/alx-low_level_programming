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
	while (i < 100)
	{
		if (i % 3 == 0)
		{
			printf (" Fizz-Buzz test ");
		}
		printf("%d ", i);
		i++;
	}
	putchar('\n');
}	
