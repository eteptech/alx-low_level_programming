#include "main.h"


/**
 * main- prints "_putchar using putchar function"
 * Return: 0 on success
 */
int main(void)
{
	char ch[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\0'};
	int len = sizeof(ch) / sizeof(ch[0]);
	int i;

	for (i = 0; i < len ; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}
