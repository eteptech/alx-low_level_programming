#include "main.h"
/**
 *_memset- prints the maching charater
 *@s :first param
 *@b :second param
 *@n :number of occurrence
 *Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;
	x = 0;
	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
