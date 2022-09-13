#include "main.h"
/**
 * _islower - check for lower case letter
 *@c : character to check the case
 *Return:0 or 1
 */

int _islower(int c)
{
	char ch;
	char str[];

	int len = sizeof(str) / sizeof(str[0]);
	int i;

	for (i = 0; i < len; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			if (str[i] == ch)
			{
				c++;
			}
		}
	}
	return (c);
}
