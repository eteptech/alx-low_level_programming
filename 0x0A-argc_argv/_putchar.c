#include <unistd.h>

/**
 * _putchar- prints a character
 * @ch : Character to be printed
 * Return: 1 number of characters to be return
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
