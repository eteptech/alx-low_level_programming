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
	while (x < n)
	{
		s[x] = b;
		x++;
		n--;
	}
	return (s);
}
