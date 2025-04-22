#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Launches a terminal shell on a Linux system
 *
 * Return: 0 if successful, 1 if an error occurs
 */

int main(void)
{
	char c;

	while (1)
	{

		c = getchar();

		if (c == '\n')
		{
			printf("<->\n");
		}
	}
}
