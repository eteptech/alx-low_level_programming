#include "main.h"
/**
 * _strlen- gets len of a string
 * @s : the string to get it lenght
 * Return: 0 success
 */
int _strlen(char *s)
{
	int len;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
