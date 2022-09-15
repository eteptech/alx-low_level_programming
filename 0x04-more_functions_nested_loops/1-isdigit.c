#include "main.h"

/**
 *_isdigit- Check for digit numbers between 0-9.
 *Return: 1 otherwise 0
 *@i : counter to be counted.
 */
int _isdigit(int i)
{
	if (i >= 0 && i <= 9)
	{
		return (i);
	}
	else if (i >= 48 && i <= 57)
	{
		return (i);
	}
	else
	{
		return (0);
	}
}
