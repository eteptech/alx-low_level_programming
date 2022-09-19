#include "main.h"
/**
 * _puts- print out charater
 * @str : pointer to the character variable
 * Return: void
 */

void _puts(char *str)
{
	int i;

	i = 0;
	for (i = 0; i < sizeof(str) / sizeof(str[0]); i++)
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
