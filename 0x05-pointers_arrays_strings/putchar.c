#include <unistd.h>
/**
 * _putchar- prints character
 * @ch : Character to be printed
 * Return: 1
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
