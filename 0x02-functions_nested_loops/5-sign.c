#include "main.h"
/**
 * print_sign- check for real number, add sign
 * @n : number to checked
 * Return: 1 or 0 or -1
 */
int print_sign(int n)
{
	int result;

	switch (n)
	{
		case n > 0:
			result = 1;
			_putchar('+');
			break;
		case n == 0:
			result = 0;
			_putchar('0');
			break;
		case n == -1:
			result = -1;
			_putchar('-');
		default:
			_putchar('1');
	}
	return (result);
}
			
