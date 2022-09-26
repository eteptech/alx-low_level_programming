#include "main.h"
/**
 *_strchr- locates character in a given string
 *@s : first param
 *@c : second param
 *Return: character found.
 */
char *_strchr(char *s, char c)
{
	while (s != '\0')
	{
		if (s == c)
			return(s);
		s++;
	}
}
int main(void)
{
	char str[] = "Emmanuel";
	char h = 'e';
	char *fine = _strchr(str,h);
	printf("%c" ,fine);
	return 0;}
