#include "main.h"
/**
 * _puts- print out charater
 * @str : pointer to the character variable
 * Return: void
 */

void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
