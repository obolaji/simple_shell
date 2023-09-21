#include <stdio.h>
#include "shell.h"
#include <stddef.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char i;

	printf("What is thy name young paladin? - ");
	i = getchar();

	for (i = 0; i < 50; i++)
	{
		if (i != '\0')
		{
			putchar('\n');
			break;
		}
		else
		{
			printf("Welcome young - %c\n ", i);
			putchar(i);
		}

	}
	return (0);
}
