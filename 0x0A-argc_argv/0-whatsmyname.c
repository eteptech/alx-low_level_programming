#include "main.h"
#include <stdio.h>
/**
 *main - prints the name of the program
 *@argc : No. of arguement counts
 *@argv : number of character enter
 *Return: 0 on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
