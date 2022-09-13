#include "main.h"
/**
 *print_last_digit - return last digit
 *@num : number to check
 *Return:0 or 1
 */
int print_last_digit(int num)
{
	num = num >= 0 ? num : num * -1;
	int last_num = num % 10;

	_putchar('0' + last_num);
	return (last_num);
}
