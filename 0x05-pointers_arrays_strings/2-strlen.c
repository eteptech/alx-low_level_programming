#include <stdio.h>
/**
 * _strlen- gets len of a string
 * @s : the string to get it lenght
 * Return: 0 success
 */
int _strlen(char *s)
{
	return (sizeof(s) / sizeof(s[0]));
}
