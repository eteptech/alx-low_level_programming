#include "main.h"
#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc : No. of arguement counts
 * @argv : number of character enter
 */

int main(int argc, char* argv[])
{
	int i;

	i = 0;
	for (i = 0; i < argc; i++)
	{
		printf("%d  %s\n ",i,argv[i]);
	}
}
