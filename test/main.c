#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Displays <-> each time the user presses Enter
 *
 * Return: 0 on success
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
